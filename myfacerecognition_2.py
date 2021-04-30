from PIL import Image
import face_recognition

# https://github.com/ageitgey/face_recognition/tree/master/examples

image1 = face_recognition.load_image_file("01_franzi_60er_gruppe.jpg")
image2 = face_recognition.load_image_file("2018_07_30_F60_Schweizerhaus.jpg")
image3 = face_recognition.load_image_file("17_matsch_geb_02012012.jpg")

# Find all the faces in the image using the default HOG-based model.
# This method is fairly accurate, but not as accurate as the CNN model and not GPU accelerated.
face_locations = face_recognition.face_locations(image3)
face_landmarks_list = face_recognition.face_landmarks(image3)
print("I found {} face(s) in this photograph.".format(len(face_locations)))
print(f"output {face_landmarks_list}")

for face_location in face_locations:
    # Print the location of each face in this image
    top, right, bottom, left = face_location
    print("A face is located at pixel location Top: {}, Left: {}, Bottom: {}, Right: {}".format(top, left, bottom, right))

    # You can access the actual face itself like this:
    face_image = image1[top:bottom, left:right]
    pil_image = Image.fromarray(face_image)
    pil_image.show()

# Find all the faces in the image using a pre-trained convolutional neural network.
# This method is more accurate than the default HOG model, but it's slower
# unless you have an nvidia GPU and dlib compiled with CUDA extensions. But if you do,
# this will use GPU acceleration and perform well.

face_locations = face_recognition.face_locations(image3, number_of_times_to_upsample=0, model="cnn")

print("I found {} face(s) in this photograph.".format(len(face_locations)))

for face_location in face_locations:

    # Print the location of each face in this image
    top, right, bottom, left = face_location
    print("A face is located at pixel location Top: {}, Left: {}, Bottom: {}, Right: {}".format(top, left, bottom, right))

    # You can access the actual face itself like this:
    face_image = image2[top:bottom, left:right]
    pil_image = Image.fromarray(face_image)
    pil_image.show()


print("done")
