import face_recognition

image = face_recognition.load_image_file("01_franzi_60er_gruppe.jpg")
face_landmarks_list = face_recognition.face_landmarks(image)
