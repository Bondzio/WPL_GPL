/* Generated code for Python module '__main__'
 * created by Nuitka version 0.6.14.4
 *
 * This code is in part copyright 2021 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module___main__" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module___main__;
PyDictObject *moduledict___main__;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[135];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("__main__"));
        constants_created = true;
    }
}

/* For multiprocessing, we want to be able to initialize the __main__ constants. */
#if (_NUITKA_PLUGIN_MULTIPROCESSING_ENABLED || _NUITKA_PLUGIN_TRACEBACK_ENCRYPTION_ENABLED) && 1
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants___main__(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "__main__");
}
#endif

// The module code objects.
static PyCodeObject *codeobj_b57e4d879b69ead890201a402ea75c42;
static PyCodeObject *codeobj_ad9f8e920ccb9599254317edd08ec111;
/* For use in "MainProgram.c". */
PyCodeObject *codeobj_main = NULL;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[117]; CHECK_OBJECT(module_filename_obj);
    codeobj_b57e4d879b69ead890201a402ea75c42 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[133], NULL, NULL, 0, 0, 0);
    codeobj_ad9f8e920ccb9599254317edd08ec111 = MAKE_CODEOBJECT(module_filename_obj, 24, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[131], mod_consts[134], NULL, 0, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION___main__$$$function__1_showMeTheButtons();


// The module function definitions.
static PyObject *impl___main__$$$function__1_showMeTheButtons(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_toolbar_buttons = NULL;
    PyObject *var_layout = NULL;
    PyObject *var_window = NULL;
    PyObject *var_start_time = NULL;
    PyObject *var_age = NULL;
    PyObject *var_event = NULL;
    PyObject *var_values = NULL;
    PyObject *var_err = NULL;
    PyObject *var_ageinhours = NULL;
    PyObject *var_w = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_ad9f8e920ccb9599254317edd08ec111;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    bool tmp_result;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    static struct Nuitka_FrameObject *cache_frame_ad9f8e920ccb9599254317edd08ec111 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ad9f8e920ccb9599254317edd08ec111)) {
        Py_XDECREF(cache_frame_ad9f8e920ccb9599254317edd08ec111);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ad9f8e920ccb9599254317edd08ec111 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ad9f8e920ccb9599254317edd08ec111 = MAKE_FUNCTION_FRAME(codeobj_ad9f8e920ccb9599254317edd08ec111, module___main__, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ad9f8e920ccb9599254317edd08ec111->m_type_description == NULL);
    frame_ad9f8e920ccb9599254317edd08ec111 = cache_frame_ad9f8e920ccb9599254317edd08ec111;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ad9f8e920ccb9599254317edd08ec111);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ad9f8e920ccb9599254317edd08ec111) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[1]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[2];
        tmp_dict_value_1 = Py_True;
        tmp_kwargs_name_1 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_name_2;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[3];
            tmp_dict_value_1 = mod_consts[4];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[5];
            tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_name_2 == NULL)) {
                tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;
                type_description_1 = "oooooooooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[6]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;
                type_description_1 = "oooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 28;
        tmp_call_result_1 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_list_element_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_kwargs_name_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_name_4;
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[7]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = mod_consts[8];
        tmp_dict_key_2 = mod_consts[9];
        tmp_expression_name_4 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_name_4 == NULL)) {
            tmp_expression_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 36;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[11]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 36;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_2 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_dict_value_2, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[12];
        PyTuple_SET_ITEM0(tmp_dict_value_2, 1, tmp_tuple_element_1);
        tmp_kwargs_name_2 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_2, tmp_dict_value_2);
        Py_DECREF(tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[13];
        tmp_dict_value_2 = mod_consts[14];
        tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[15];
        tmp_dict_value_2 = mod_consts[16];
        tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 36;
        tmp_list_element_2 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_1, tmp_kwargs_name_2);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_kwargs_name_2);
        if (tmp_list_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = PyList_New(1);
        PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_2);
        tmp_assign_source_1 = PyList_New(8);
        {
            PyObject *tmp_list_element_3;
            PyObject *tmp_called_name_3;
            PyObject *tmp_expression_name_5;
            PyObject *tmp_args_name_2;
            PyObject *tmp_kwargs_name_3;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_expression_name_6;
            PyObject *tmp_list_element_4;
            PyObject *tmp_called_name_4;
            PyObject *tmp_expression_name_8;
            PyObject *tmp_args_name_3;
            PyObject *tmp_kwargs_name_4;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_list_element_5;
            PyObject *tmp_called_name_8;
            PyObject *tmp_expression_name_18;
            PyObject *tmp_args_name_5;
            PyObject *tmp_kwargs_name_8;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            PyObject *tmp_expression_name_19;
            PyObject *tmp_list_element_6;
            PyObject *tmp_called_name_9;
            PyObject *tmp_expression_name_21;
            PyObject *tmp_args_name_6;
            PyObject *tmp_kwargs_name_9;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            PyObject *tmp_list_element_7;
            PyObject *tmp_called_name_13;
            PyObject *tmp_expression_name_35;
            PyObject *tmp_args_name_9;
            PyObject *tmp_kwargs_name_13;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            PyObject *tmp_expression_name_36;
            PyObject *tmp_list_element_8;
            PyObject *tmp_called_name_14;
            PyObject *tmp_expression_name_38;
            PyObject *tmp_args_name_10;
            PyObject *tmp_kwargs_name_14;
            PyObject *tmp_dict_key_14;
            PyObject *tmp_dict_value_14;
            PyObject *tmp_list_element_9;
            PyObject *tmp_called_name_16;
            PyObject *tmp_expression_name_44;
            PyObject *tmp_args_name_12;
            PyObject *tmp_kwargs_name_16;
            PyObject *tmp_dict_key_16;
            PyObject *tmp_dict_value_16;
            PyObject *tmp_expression_name_45;
            PyList_SET_ITEM(tmp_assign_source_1, 0, tmp_list_element_1);
            tmp_expression_name_5 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_name_5 == NULL)) {
                tmp_expression_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_name_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;
                type_description_1 = "oooooooooo";
                goto list_build_exception_1;
            }
            tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[7]);
            if (tmp_called_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;
                type_description_1 = "oooooooooo";
                goto list_build_exception_1;
            }
            tmp_args_name_2 = mod_consts[17];
            tmp_dict_key_3 = mod_consts[18];
            tmp_expression_name_6 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_expression_name_6 == NULL)) {
                tmp_expression_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_expression_name_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_3);

                exception_lineno = 37;
                type_description_1 = "oooooooooo";
                goto list_build_exception_1;
            }
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[19]);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_3);

                exception_lineno = 37;
                type_description_1 = "oooooooooo";
                goto list_build_exception_1;
            }
            tmp_kwargs_name_3 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_name_7;
                tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[20];
                tmp_expression_name_7 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[10]);

                if (unlikely(tmp_expression_name_7 == NULL)) {
                    tmp_expression_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                }

                if (tmp_expression_name_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 37;
                    type_description_1 = "oooooooooo";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[19]);
                if (tmp_dict_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 37;
                    type_description_1 = "oooooooooo";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_2;
            // Exception handling pass through code for dict_build:
            dict_build_exception_2:;
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_kwargs_name_3);
            goto list_build_exception_1;
            // Finished with no exception for dict_build:
            dict_build_noexception_2:;
            frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 37;
            tmp_list_element_3 = CALL_FUNCTION(tmp_called_name_3, tmp_args_name_2, tmp_kwargs_name_3);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_kwargs_name_3);
            if (tmp_list_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;
                type_description_1 = "oooooooooo";
                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyList_New(1);
            PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_3);
            PyList_SET_ITEM(tmp_assign_source_1, 1, tmp_list_element_1);
            tmp_expression_name_8 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_name_8 == NULL)) {
                tmp_expression_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_name_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_1 = "oooooooooo";
                goto list_build_exception_1;
            }
            tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[7]);
            if (tmp_called_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_1 = "oooooooooo";
                goto list_build_exception_1;
            }
            tmp_args_name_3 = mod_consts[17];
            tmp_dict_key_4 = mod_consts[13];
            tmp_dict_value_4 = mod_consts[14];
            tmp_kwargs_name_4 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_name_9;
                PyObject *tmp_expression_name_10;
                tmp_res = PyDict_SetItem(tmp_kwargs_name_4, tmp_dict_key_4, tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[18];
                tmp_expression_name_9 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[10]);

                if (unlikely(tmp_expression_name_9 == NULL)) {
                    tmp_expression_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                }

                if (tmp_expression_name_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 38;
                    type_description_1 = "oooooooooo";
                    goto dict_build_exception_3;
                }
                tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[19]);
                if (tmp_dict_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 38;
                    type_description_1 = "oooooooooo";
                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_kwargs_name_4, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[20];
                tmp_expression_name_10 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[10]);

                if (unlikely(tmp_expression_name_10 == NULL)) {
                    tmp_expression_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                }

                if (tmp_expression_name_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 38;
                    type_description_1 = "oooooooooo";
                    goto dict_build_exception_3;
                }
                tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[19]);
                if (tmp_dict_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 38;
                    type_description_1 = "oooooooooo";
                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_kwargs_name_4, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_3;
            // Exception handling pass through code for dict_build:
            dict_build_exception_3:;
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_kwargs_name_4);
            goto list_build_exception_1;
            // Finished with no exception for dict_build:
            dict_build_noexception_3:;
            frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 38;
            tmp_list_element_4 = CALL_FUNCTION(tmp_called_name_4, tmp_args_name_3, tmp_kwargs_name_4);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_kwargs_name_4);
            if (tmp_list_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_1 = "oooooooooo";
                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyList_New(4);
            {
                PyObject *tmp_called_name_5;
                PyObject *tmp_expression_name_11;
                PyObject *tmp_kwargs_name_5;
                PyObject *tmp_dict_key_5;
                PyObject *tmp_dict_value_5;
                PyObject *tmp_called_name_6;
                PyObject *tmp_expression_name_13;
                PyObject *tmp_args_name_4;
                PyObject *tmp_kwargs_name_6;
                PyObject *tmp_dict_key_6;
                PyObject *tmp_dict_value_6;
                PyObject *tmp_called_name_7;
                PyObject *tmp_expression_name_16;
                PyObject *tmp_kwargs_name_7;
                PyObject *tmp_dict_key_7;
                PyObject *tmp_dict_value_7;
                PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_4);
                tmp_expression_name_11 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[0]);

                if (unlikely(tmp_expression_name_11 == NULL)) {
                    tmp_expression_name_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                }

                if (tmp_expression_name_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 39;
                    type_description_1 = "oooooooooo";
                    goto list_build_exception_2;
                }
                tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[21]);
                if (tmp_called_name_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 39;
                    type_description_1 = "oooooooooo";
                    goto list_build_exception_2;
                }
                tmp_dict_key_5 = mod_consts[22];
                tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[23]);

                if (unlikely(tmp_dict_value_5 == NULL)) {
                    tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
                }

                if (tmp_dict_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_name_5);

                    exception_lineno = 39;
                    type_description_1 = "oooooooooo";
                    goto list_build_exception_2;
                }
                tmp_kwargs_name_5 = _PyDict_NewPresized( 3 );
                {
                    PyObject *tmp_expression_name_12;
                    tmp_res = PyDict_SetItem(tmp_kwargs_name_5, tmp_dict_key_5, tmp_dict_value_5);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_5 = mod_consts[18];
                    tmp_expression_name_12 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_expression_name_12 == NULL)) {
                        tmp_expression_name_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_expression_name_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 39;
                        type_description_1 = "oooooooooo";
                        goto dict_build_exception_4;
                    }
                    tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[19]);
                    if (tmp_dict_value_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 39;
                        type_description_1 = "oooooooooo";
                        goto dict_build_exception_4;
                    }
                    tmp_res = PyDict_SetItem(tmp_kwargs_name_5, tmp_dict_key_5, tmp_dict_value_5);
                    Py_DECREF(tmp_dict_value_5);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_5 = mod_consts[24];
                    tmp_dict_value_5 = mod_consts[25];
                    tmp_res = PyDict_SetItem(tmp_kwargs_name_5, tmp_dict_key_5, tmp_dict_value_5);
                    assert(!(tmp_res != 0));
                }
                goto dict_build_noexception_4;
                // Exception handling pass through code for dict_build:
                dict_build_exception_4:;
                Py_DECREF(tmp_called_name_5);
                Py_DECREF(tmp_kwargs_name_5);
                goto list_build_exception_2;
                // Finished with no exception for dict_build:
                dict_build_noexception_4:;
                frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 39;
                tmp_list_element_4 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_5, tmp_kwargs_name_5);
                Py_DECREF(tmp_called_name_5);
                Py_DECREF(tmp_kwargs_name_5);
                if (tmp_list_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 39;
                    type_description_1 = "oooooooooo";
                    goto list_build_exception_2;
                }
                PyList_SET_ITEM(tmp_list_element_1, 1, tmp_list_element_4);
                tmp_expression_name_13 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[0]);

                if (unlikely(tmp_expression_name_13 == NULL)) {
                    tmp_expression_name_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                }

                if (tmp_expression_name_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 40;
                    type_description_1 = "oooooooooo";
                    goto list_build_exception_2;
                }
                tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[7]);
                if (tmp_called_name_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 40;
                    type_description_1 = "oooooooooo";
                    goto list_build_exception_2;
                }
                tmp_args_name_4 = mod_consts[17];
                tmp_dict_key_6 = mod_consts[13];
                tmp_dict_value_6 = mod_consts[26];
                tmp_kwargs_name_6 = _PyDict_NewPresized( 3 );
                {
                    PyObject *tmp_expression_name_14;
                    PyObject *tmp_expression_name_15;
                    tmp_res = PyDict_SetItem(tmp_kwargs_name_6, tmp_dict_key_6, tmp_dict_value_6);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_6 = mod_consts[18];
                    tmp_expression_name_14 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_expression_name_14 == NULL)) {
                        tmp_expression_name_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_expression_name_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 40;
                        type_description_1 = "oooooooooo";
                        goto dict_build_exception_5;
                    }
                    tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, mod_consts[19]);
                    if (tmp_dict_value_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 40;
                        type_description_1 = "oooooooooo";
                        goto dict_build_exception_5;
                    }
                    tmp_res = PyDict_SetItem(tmp_kwargs_name_6, tmp_dict_key_6, tmp_dict_value_6);
                    Py_DECREF(tmp_dict_value_6);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_6 = mod_consts[20];
                    tmp_expression_name_15 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_expression_name_15 == NULL)) {
                        tmp_expression_name_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_expression_name_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 40;
                        type_description_1 = "oooooooooo";
                        goto dict_build_exception_5;
                    }
                    tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_15, mod_consts[19]);
                    if (tmp_dict_value_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 40;
                        type_description_1 = "oooooooooo";
                        goto dict_build_exception_5;
                    }
                    tmp_res = PyDict_SetItem(tmp_kwargs_name_6, tmp_dict_key_6, tmp_dict_value_6);
                    Py_DECREF(tmp_dict_value_6);
                    assert(!(tmp_res != 0));
                }
                goto dict_build_noexception_5;
                // Exception handling pass through code for dict_build:
                dict_build_exception_5:;
                Py_DECREF(tmp_called_name_6);
                Py_DECREF(tmp_kwargs_name_6);
                goto list_build_exception_2;
                // Finished with no exception for dict_build:
                dict_build_noexception_5:;
                frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 40;
                tmp_list_element_4 = CALL_FUNCTION(tmp_called_name_6, tmp_args_name_4, tmp_kwargs_name_6);
                Py_DECREF(tmp_called_name_6);
                Py_DECREF(tmp_kwargs_name_6);
                if (tmp_list_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 40;
                    type_description_1 = "oooooooooo";
                    goto list_build_exception_2;
                }
                PyList_SET_ITEM(tmp_list_element_1, 2, tmp_list_element_4);
                tmp_expression_name_16 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[0]);

                if (unlikely(tmp_expression_name_16 == NULL)) {
                    tmp_expression_name_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                }

                if (tmp_expression_name_16 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 41;
                    type_description_1 = "oooooooooo";
                    goto list_build_exception_2;
                }
                tmp_called_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_16, mod_consts[21]);
                if (tmp_called_name_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 41;
                    type_description_1 = "oooooooooo";
                    goto list_build_exception_2;
                }
                tmp_dict_key_7 = mod_consts[22];
                tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[27]);

                if (unlikely(tmp_dict_value_7 == NULL)) {
                    tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
                }

                if (tmp_dict_value_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_name_7);

                    exception_lineno = 41;
                    type_description_1 = "oooooooooo";
                    goto list_build_exception_2;
                }
                tmp_kwargs_name_7 = _PyDict_NewPresized( 3 );
                {
                    PyObject *tmp_expression_name_17;
                    tmp_res = PyDict_SetItem(tmp_kwargs_name_7, tmp_dict_key_7, tmp_dict_value_7);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_7 = mod_consts[18];
                    tmp_expression_name_17 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_expression_name_17 == NULL)) {
                        tmp_expression_name_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_expression_name_17 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 41;
                        type_description_1 = "oooooooooo";
                        goto dict_build_exception_6;
                    }
                    tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_17, mod_consts[19]);
                    if (tmp_dict_value_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 41;
                        type_description_1 = "oooooooooo";
                        goto dict_build_exception_6;
                    }
                    tmp_res = PyDict_SetItem(tmp_kwargs_name_7, tmp_dict_key_7, tmp_dict_value_7);
                    Py_DECREF(tmp_dict_value_7);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_7 = mod_consts[24];
                    tmp_dict_value_7 = mod_consts[28];
                    tmp_res = PyDict_SetItem(tmp_kwargs_name_7, tmp_dict_key_7, tmp_dict_value_7);
                    assert(!(tmp_res != 0));
                }
                goto dict_build_noexception_6;
                // Exception handling pass through code for dict_build:
                dict_build_exception_6:;
                Py_DECREF(tmp_called_name_7);
                Py_DECREF(tmp_kwargs_name_7);
                goto list_build_exception_2;
                // Finished with no exception for dict_build:
                dict_build_noexception_6:;
                frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 41;
                tmp_list_element_4 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_7, tmp_kwargs_name_7);
                Py_DECREF(tmp_called_name_7);
                Py_DECREF(tmp_kwargs_name_7);
                if (tmp_list_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 41;
                    type_description_1 = "oooooooooo";
                    goto list_build_exception_2;
                }
                PyList_SET_ITEM(tmp_list_element_1, 3, tmp_list_element_4);
            }
            goto list_build_noexception_1;
            // Exception handling pass through code for list_build:
            list_build_exception_2:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for list_build:
            list_build_noexception_1:;
            PyList_SET_ITEM(tmp_assign_source_1, 2, tmp_list_element_1);
            tmp_expression_name_18 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_name_18 == NULL)) {
                tmp_expression_name_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_name_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_1 = "oooooooooo";
                goto list_build_exception_1;
            }
            tmp_called_name_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_18, mod_consts[7]);
            if (tmp_called_name_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_1 = "oooooooooo";
                goto list_build_exception_1;
            }
            tmp_args_name_5 = mod_consts[17];
            tmp_dict_key_8 = mod_consts[18];
            tmp_expression_name_19 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_expression_name_19 == NULL)) {
                tmp_expression_name_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_expression_name_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_8);

                exception_lineno = 42;
                type_description_1 = "oooooooooo";
                goto list_build_exception_1;
            }
            tmp_dict_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_19, mod_consts[19]);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_8);

                exception_lineno = 42;
                type_description_1 = "oooooooooo";
                goto list_build_exception_1;
            }
            tmp_kwargs_name_8 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_name_20;
                tmp_res = PyDict_SetItem(tmp_kwargs_name_8, tmp_dict_key_8, tmp_dict_value_8);
                Py_DECREF(tmp_dict_value_8);
                assert(!(tmp_res != 0));
                tmp_dict_key_8 = mod_consts[20];
                tmp_expression_name_20 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[10]);

                if (unlikely(tmp_expression_name_20 == NULL)) {
                    tmp_expression_name_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                }

                if (tmp_expression_name_20 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 42;
                    type_description_1 = "oooooooooo";
                    goto dict_build_exception_7;
                }
                tmp_dict_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_20, mod_consts[19]);
                if (tmp_dict_value_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 42;
                    type_description_1 = "oooooooooo";
                    goto dict_build_exception_7;
                }
                tmp_res = PyDict_SetItem(tmp_kwargs_name_8, tmp_dict_key_8, tmp_dict_value_8);
                Py_DECREF(tmp_dict_value_8);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_7;
            // Exception handling pass through code for dict_build:
            dict_build_exception_7:;
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_kwargs_name_8);
            goto list_build_exception_1;
            // Finished with no exception for dict_build:
            dict_build_noexception_7:;
            frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 42;
            tmp_list_element_5 = CALL_FUNCTION(tmp_called_name_8, tmp_args_name_5, tmp_kwargs_name_8);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_kwargs_name_8);
            if (tmp_list_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_1 = "oooooooooo";
                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyList_New(1);
            PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_5);
            PyList_SET_ITEM(tmp_assign_source_1, 3, tmp_list_element_1);
            tmp_expression_name_21 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_name_21 == NULL)) {
                tmp_expression_name_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_name_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_1 = "oooooooooo";
                goto list_build_exception_1;
            }
            tmp_called_name_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_21, mod_consts[7]);
            if (tmp_called_name_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_1 = "oooooooooo";
                goto list_build_exception_1;
            }
            tmp_args_name_6 = mod_consts[17];
            tmp_dict_key_9 = mod_consts[13];
            tmp_dict_value_9 = mod_consts[29];
            tmp_kwargs_name_9 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_name_22;
                PyObject *tmp_expression_name_23;
                tmp_res = PyDict_SetItem(tmp_kwargs_name_9, tmp_dict_key_9, tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[18];
                tmp_expression_name_22 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[10]);

                if (unlikely(tmp_expression_name_22 == NULL)) {
                    tmp_expression_name_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                }

                if (tmp_expression_name_22 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 43;
                    type_description_1 = "oooooooooo";
                    goto dict_build_exception_8;
                }
                tmp_dict_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_22, mod_consts[19]);
                if (tmp_dict_value_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 43;
                    type_description_1 = "oooooooooo";
                    goto dict_build_exception_8;
                }
                tmp_res = PyDict_SetItem(tmp_kwargs_name_9, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[20];
                tmp_expression_name_23 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[10]);

                if (unlikely(tmp_expression_name_23 == NULL)) {
                    tmp_expression_name_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                }

                if (tmp_expression_name_23 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 43;
                    type_description_1 = "oooooooooo";
                    goto dict_build_exception_8;
                }
                tmp_dict_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_23, mod_consts[19]);
                if (tmp_dict_value_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 43;
                    type_description_1 = "oooooooooo";
                    goto dict_build_exception_8;
                }
                tmp_res = PyDict_SetItem(tmp_kwargs_name_9, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_8;
            // Exception handling pass through code for dict_build:
            dict_build_exception_8:;
            Py_DECREF(tmp_called_name_9);
            Py_DECREF(tmp_kwargs_name_9);
            goto list_build_exception_1;
            // Finished with no exception for dict_build:
            dict_build_noexception_8:;
            frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 43;
            tmp_list_element_6 = CALL_FUNCTION(tmp_called_name_9, tmp_args_name_6, tmp_kwargs_name_9);
            Py_DECREF(tmp_called_name_9);
            Py_DECREF(tmp_kwargs_name_9);
            if (tmp_list_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_1 = "oooooooooo";
                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyList_New(4);
            {
                PyObject *tmp_called_name_10;
                PyObject *tmp_expression_name_24;
                PyObject *tmp_args_name_7;
                PyObject *tmp_kwargs_name_10;
                PyObject *tmp_dict_key_10;
                PyObject *tmp_dict_value_10;
                PyObject *tmp_called_name_11;
                PyObject *tmp_expression_name_28;
                PyObject *tmp_kwargs_name_11;
                PyObject *tmp_dict_key_11;
                PyObject *tmp_dict_value_11;
                PyObject *tmp_called_name_12;
                PyObject *tmp_expression_name_31;
                PyObject *tmp_args_name_8;
                PyObject *tmp_kwargs_name_12;
                PyObject *tmp_dict_key_12;
                PyObject *tmp_dict_value_12;
                PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_6);
                tmp_expression_name_24 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[0]);

                if (unlikely(tmp_expression_name_24 == NULL)) {
                    tmp_expression_name_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                }

                if (tmp_expression_name_24 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 44;
                    type_description_1 = "oooooooooo";
                    goto list_build_exception_3;
                }
                tmp_called_name_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_24, mod_consts[7]);
                if (tmp_called_name_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 44;
                    type_description_1 = "oooooooooo";
                    goto list_build_exception_3;
                }
                tmp_args_name_7 = mod_consts[30];
                tmp_dict_key_10 = mod_consts[13];
                tmp_dict_value_10 = mod_consts[31];
                tmp_kwargs_name_10 = _PyDict_NewPresized( 4 );
                {
                    PyObject *tmp_expression_name_25;
                    PyObject *tmp_expression_name_26;
                    PyObject *tmp_tuple_element_2;
                    PyObject *tmp_expression_name_27;
                    tmp_res = PyDict_SetItem(tmp_kwargs_name_10, tmp_dict_key_10, tmp_dict_value_10);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_10 = mod_consts[18];
                    tmp_expression_name_25 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_expression_name_25 == NULL)) {
                        tmp_expression_name_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_expression_name_25 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 44;
                        type_description_1 = "oooooooooo";
                        goto dict_build_exception_9;
                    }
                    tmp_dict_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_25, mod_consts[19]);
                    if (tmp_dict_value_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 44;
                        type_description_1 = "oooooooooo";
                        goto dict_build_exception_9;
                    }
                    tmp_res = PyDict_SetItem(tmp_kwargs_name_10, tmp_dict_key_10, tmp_dict_value_10);
                    Py_DECREF(tmp_dict_value_10);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_10 = mod_consts[20];
                    tmp_expression_name_26 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_expression_name_26 == NULL)) {
                        tmp_expression_name_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_expression_name_26 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 44;
                        type_description_1 = "oooooooooo";
                        goto dict_build_exception_9;
                    }
                    tmp_dict_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_26, mod_consts[32]);
                    if (tmp_dict_value_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 44;
                        type_description_1 = "oooooooooo";
                        goto dict_build_exception_9;
                    }
                    tmp_res = PyDict_SetItem(tmp_kwargs_name_10, tmp_dict_key_10, tmp_dict_value_10);
                    Py_DECREF(tmp_dict_value_10);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_10 = mod_consts[9];
                    tmp_expression_name_27 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_expression_name_27 == NULL)) {
                        tmp_expression_name_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_expression_name_27 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 45;
                        type_description_1 = "oooooooooo";
                        goto dict_build_exception_9;
                    }
                    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_27, mod_consts[11]);
                    if (tmp_tuple_element_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 45;
                        type_description_1 = "oooooooooo";
                        goto dict_build_exception_9;
                    }
                    tmp_dict_value_10 = PyTuple_New(2);
                    PyTuple_SET_ITEM(tmp_dict_value_10, 0, tmp_tuple_element_2);
                    tmp_tuple_element_2 = mod_consts[33];
                    PyTuple_SET_ITEM0(tmp_dict_value_10, 1, tmp_tuple_element_2);
                    tmp_res = PyDict_SetItem(tmp_kwargs_name_10, tmp_dict_key_10, tmp_dict_value_10);
                    Py_DECREF(tmp_dict_value_10);
                    assert(!(tmp_res != 0));
                }
                goto dict_build_noexception_9;
                // Exception handling pass through code for dict_build:
                dict_build_exception_9:;
                Py_DECREF(tmp_called_name_10);
                Py_DECREF(tmp_kwargs_name_10);
                goto list_build_exception_3;
                // Finished with no exception for dict_build:
                dict_build_noexception_9:;
                frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 44;
                tmp_list_element_6 = CALL_FUNCTION(tmp_called_name_10, tmp_args_name_7, tmp_kwargs_name_10);
                Py_DECREF(tmp_called_name_10);
                Py_DECREF(tmp_kwargs_name_10);
                if (tmp_list_element_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 44;
                    type_description_1 = "oooooooooo";
                    goto list_build_exception_3;
                }
                PyList_SET_ITEM(tmp_list_element_1, 1, tmp_list_element_6);
                tmp_expression_name_28 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[0]);

                if (unlikely(tmp_expression_name_28 == NULL)) {
                    tmp_expression_name_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                }

                if (tmp_expression_name_28 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 46;
                    type_description_1 = "oooooooooo";
                    goto list_build_exception_3;
                }
                tmp_called_name_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_28, mod_consts[34]);
                if (tmp_called_name_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 46;
                    type_description_1 = "oooooooooo";
                    goto list_build_exception_3;
                }
                tmp_dict_key_11 = mod_consts[13];
                tmp_dict_value_11 = mod_consts[26];
                tmp_kwargs_name_11 = _PyDict_NewPresized( 7 );
                {
                    PyObject *tmp_tuple_element_3;
                    PyObject *tmp_expression_name_29;
                    PyObject *tmp_expression_name_30;
                    tmp_res = PyDict_SetItem(tmp_kwargs_name_11, tmp_dict_key_11, tmp_dict_value_11);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_11 = mod_consts[15];
                    tmp_dict_value_11 = mod_consts[16];
                    tmp_res = PyDict_SetItem(tmp_kwargs_name_11, tmp_dict_key_11, tmp_dict_value_11);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_11 = mod_consts[9];
                    tmp_expression_name_29 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_expression_name_29 == NULL)) {
                        tmp_expression_name_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_expression_name_29 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 46;
                        type_description_1 = "oooooooooo";
                        goto dict_build_exception_10;
                    }
                    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_29, mod_consts[11]);
                    if (tmp_tuple_element_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 46;
                        type_description_1 = "oooooooooo";
                        goto dict_build_exception_10;
                    }
                    tmp_dict_value_11 = PyTuple_New(2);
                    PyTuple_SET_ITEM(tmp_dict_value_11, 0, tmp_tuple_element_3);
                    tmp_tuple_element_3 = mod_consts[33];
                    PyTuple_SET_ITEM0(tmp_dict_value_11, 1, tmp_tuple_element_3);
                    tmp_res = PyDict_SetItem(tmp_kwargs_name_11, tmp_dict_key_11, tmp_dict_value_11);
                    Py_DECREF(tmp_dict_value_11);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_11 = mod_consts[20];
                    tmp_expression_name_30 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_expression_name_30 == NULL)) {
                        tmp_expression_name_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_expression_name_30 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 46;
                        type_description_1 = "oooooooooo";
                        goto dict_build_exception_10;
                    }
                    tmp_dict_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_30, mod_consts[19]);
                    if (tmp_dict_value_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 46;
                        type_description_1 = "oooooooooo";
                        goto dict_build_exception_10;
                    }
                    tmp_res = PyDict_SetItem(tmp_kwargs_name_11, tmp_dict_key_11, tmp_dict_value_11);
                    Py_DECREF(tmp_dict_value_11);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_11 = mod_consts[35];
                    tmp_dict_value_11 = mod_consts[36];
                    tmp_res = PyDict_SetItem(tmp_kwargs_name_11, tmp_dict_key_11, tmp_dict_value_11);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_11 = mod_consts[37];
                    tmp_dict_value_11 = Py_True;
                    tmp_res = PyDict_SetItem(tmp_kwargs_name_11, tmp_dict_key_11, tmp_dict_value_11);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_11 = mod_consts[24];
                    tmp_dict_value_11 = mod_consts[38];
                    tmp_res = PyDict_SetItem(tmp_kwargs_name_11, tmp_dict_key_11, tmp_dict_value_11);
                    assert(!(tmp_res != 0));
                }
                goto dict_build_noexception_10;
                // Exception handling pass through code for dict_build:
                dict_build_exception_10:;
                Py_DECREF(tmp_called_name_11);
                Py_DECREF(tmp_kwargs_name_11);
                goto list_build_exception_3;
                // Finished with no exception for dict_build:
                dict_build_noexception_10:;
                frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 46;
                tmp_list_element_6 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_11, tmp_kwargs_name_11);
                Py_DECREF(tmp_called_name_11);
                Py_DECREF(tmp_kwargs_name_11);
                if (tmp_list_element_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 46;
                    type_description_1 = "oooooooooo";
                    goto list_build_exception_3;
                }
                PyList_SET_ITEM(tmp_list_element_1, 2, tmp_list_element_6);
                tmp_expression_name_31 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[0]);

                if (unlikely(tmp_expression_name_31 == NULL)) {
                    tmp_expression_name_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                }

                if (tmp_expression_name_31 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 48;
                    type_description_1 = "oooooooooo";
                    goto list_build_exception_3;
                }
                tmp_called_name_12 = LOOKUP_ATTRIBUTE(tmp_expression_name_31, mod_consts[7]);
                if (tmp_called_name_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 48;
                    type_description_1 = "oooooooooo";
                    goto list_build_exception_3;
                }
                tmp_args_name_8 = mod_consts[17];
                tmp_dict_key_12 = mod_consts[13];
                tmp_dict_value_12 = mod_consts[29];
                tmp_kwargs_name_12 = _PyDict_NewPresized( 5 );
                {
                    PyObject *tmp_expression_name_32;
                    PyObject *tmp_expression_name_33;
                    PyObject *tmp_tuple_element_4;
                    PyObject *tmp_expression_name_34;
                    tmp_res = PyDict_SetItem(tmp_kwargs_name_12, tmp_dict_key_12, tmp_dict_value_12);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_12 = mod_consts[18];
                    tmp_expression_name_32 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_expression_name_32 == NULL)) {
                        tmp_expression_name_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_expression_name_32 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 48;
                        type_description_1 = "oooooooooo";
                        goto dict_build_exception_11;
                    }
                    tmp_dict_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_name_32, mod_consts[19]);
                    if (tmp_dict_value_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 48;
                        type_description_1 = "oooooooooo";
                        goto dict_build_exception_11;
                    }
                    tmp_res = PyDict_SetItem(tmp_kwargs_name_12, tmp_dict_key_12, tmp_dict_value_12);
                    Py_DECREF(tmp_dict_value_12);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_12 = mod_consts[20];
                    tmp_expression_name_33 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_expression_name_33 == NULL)) {
                        tmp_expression_name_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_expression_name_33 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 48;
                        type_description_1 = "oooooooooo";
                        goto dict_build_exception_11;
                    }
                    tmp_dict_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_name_33, mod_consts[32]);
                    if (tmp_dict_value_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 48;
                        type_description_1 = "oooooooooo";
                        goto dict_build_exception_11;
                    }
                    tmp_res = PyDict_SetItem(tmp_kwargs_name_12, tmp_dict_key_12, tmp_dict_value_12);
                    Py_DECREF(tmp_dict_value_12);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_12 = mod_consts[35];
                    tmp_dict_value_12 = mod_consts[39];
                    tmp_res = PyDict_SetItem(tmp_kwargs_name_12, tmp_dict_key_12, tmp_dict_value_12);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_12 = mod_consts[9];
                    tmp_expression_name_34 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_expression_name_34 == NULL)) {
                        tmp_expression_name_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_expression_name_34 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 49;
                        type_description_1 = "oooooooooo";
                        goto dict_build_exception_11;
                    }
                    tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_34, mod_consts[11]);
                    if (tmp_tuple_element_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 49;
                        type_description_1 = "oooooooooo";
                        goto dict_build_exception_11;
                    }
                    tmp_dict_value_12 = PyTuple_New(2);
                    PyTuple_SET_ITEM(tmp_dict_value_12, 0, tmp_tuple_element_4);
                    tmp_tuple_element_4 = mod_consts[33];
                    PyTuple_SET_ITEM0(tmp_dict_value_12, 1, tmp_tuple_element_4);
                    tmp_res = PyDict_SetItem(tmp_kwargs_name_12, tmp_dict_key_12, tmp_dict_value_12);
                    Py_DECREF(tmp_dict_value_12);
                    assert(!(tmp_res != 0));
                }
                goto dict_build_noexception_11;
                // Exception handling pass through code for dict_build:
                dict_build_exception_11:;
                Py_DECREF(tmp_called_name_12);
                Py_DECREF(tmp_kwargs_name_12);
                goto list_build_exception_3;
                // Finished with no exception for dict_build:
                dict_build_noexception_11:;
                frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 48;
                tmp_list_element_6 = CALL_FUNCTION(tmp_called_name_12, tmp_args_name_8, tmp_kwargs_name_12);
                Py_DECREF(tmp_called_name_12);
                Py_DECREF(tmp_kwargs_name_12);
                if (tmp_list_element_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 48;
                    type_description_1 = "oooooooooo";
                    goto list_build_exception_3;
                }
                PyList_SET_ITEM(tmp_list_element_1, 3, tmp_list_element_6);
            }
            goto list_build_noexception_2;
            // Exception handling pass through code for list_build:
            list_build_exception_3:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for list_build:
            list_build_noexception_2:;
            PyList_SET_ITEM(tmp_assign_source_1, 4, tmp_list_element_1);
            tmp_expression_name_35 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_name_35 == NULL)) {
                tmp_expression_name_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_name_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;
                type_description_1 = "oooooooooo";
                goto list_build_exception_1;
            }
            tmp_called_name_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_35, mod_consts[7]);
            if (tmp_called_name_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;
                type_description_1 = "oooooooooo";
                goto list_build_exception_1;
            }
            tmp_args_name_9 = mod_consts[17];
            tmp_dict_key_13 = mod_consts[18];
            tmp_expression_name_36 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_expression_name_36 == NULL)) {
                tmp_expression_name_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_expression_name_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_13);

                exception_lineno = 50;
                type_description_1 = "oooooooooo";
                goto list_build_exception_1;
            }
            tmp_dict_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_36, mod_consts[19]);
            if (tmp_dict_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_13);

                exception_lineno = 50;
                type_description_1 = "oooooooooo";
                goto list_build_exception_1;
            }
            tmp_kwargs_name_13 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_name_37;
                tmp_res = PyDict_SetItem(tmp_kwargs_name_13, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[20];
                tmp_expression_name_37 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[10]);

                if (unlikely(tmp_expression_name_37 == NULL)) {
                    tmp_expression_name_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                }

                if (tmp_expression_name_37 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 50;
                    type_description_1 = "oooooooooo";
                    goto dict_build_exception_12;
                }
                tmp_dict_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_37, mod_consts[19]);
                if (tmp_dict_value_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 50;
                    type_description_1 = "oooooooooo";
                    goto dict_build_exception_12;
                }
                tmp_res = PyDict_SetItem(tmp_kwargs_name_13, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_12;
            // Exception handling pass through code for dict_build:
            dict_build_exception_12:;
            Py_DECREF(tmp_called_name_13);
            Py_DECREF(tmp_kwargs_name_13);
            goto list_build_exception_1;
            // Finished with no exception for dict_build:
            dict_build_noexception_12:;
            frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 50;
            tmp_list_element_7 = CALL_FUNCTION(tmp_called_name_13, tmp_args_name_9, tmp_kwargs_name_13);
            Py_DECREF(tmp_called_name_13);
            Py_DECREF(tmp_kwargs_name_13);
            if (tmp_list_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;
                type_description_1 = "oooooooooo";
                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyList_New(1);
            PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_7);
            PyList_SET_ITEM(tmp_assign_source_1, 5, tmp_list_element_1);
            tmp_expression_name_38 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_name_38 == NULL)) {
                tmp_expression_name_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_name_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;
                type_description_1 = "oooooooooo";
                goto list_build_exception_1;
            }
            tmp_called_name_14 = LOOKUP_ATTRIBUTE(tmp_expression_name_38, mod_consts[7]);
            if (tmp_called_name_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;
                type_description_1 = "oooooooooo";
                goto list_build_exception_1;
            }
            tmp_args_name_10 = mod_consts[17];
            tmp_dict_key_14 = mod_consts[13];
            tmp_dict_value_14 = mod_consts[40];
            tmp_kwargs_name_14 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_name_39;
                PyObject *tmp_expression_name_40;
                tmp_res = PyDict_SetItem(tmp_kwargs_name_14, tmp_dict_key_14, tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[18];
                tmp_expression_name_39 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[10]);

                if (unlikely(tmp_expression_name_39 == NULL)) {
                    tmp_expression_name_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                }

                if (tmp_expression_name_39 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 51;
                    type_description_1 = "oooooooooo";
                    goto dict_build_exception_13;
                }
                tmp_dict_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_name_39, mod_consts[19]);
                if (tmp_dict_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 51;
                    type_description_1 = "oooooooooo";
                    goto dict_build_exception_13;
                }
                tmp_res = PyDict_SetItem(tmp_kwargs_name_14, tmp_dict_key_14, tmp_dict_value_14);
                Py_DECREF(tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[20];
                tmp_expression_name_40 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[10]);

                if (unlikely(tmp_expression_name_40 == NULL)) {
                    tmp_expression_name_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                }

                if (tmp_expression_name_40 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 51;
                    type_description_1 = "oooooooooo";
                    goto dict_build_exception_13;
                }
                tmp_dict_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_name_40, mod_consts[19]);
                if (tmp_dict_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 51;
                    type_description_1 = "oooooooooo";
                    goto dict_build_exception_13;
                }
                tmp_res = PyDict_SetItem(tmp_kwargs_name_14, tmp_dict_key_14, tmp_dict_value_14);
                Py_DECREF(tmp_dict_value_14);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_13;
            // Exception handling pass through code for dict_build:
            dict_build_exception_13:;
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_kwargs_name_14);
            goto list_build_exception_1;
            // Finished with no exception for dict_build:
            dict_build_noexception_13:;
            frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 51;
            tmp_list_element_8 = CALL_FUNCTION(tmp_called_name_14, tmp_args_name_10, tmp_kwargs_name_14);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_kwargs_name_14);
            if (tmp_list_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;
                type_description_1 = "oooooooooo";
                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyList_New(2);
            {
                PyObject *tmp_called_name_15;
                PyObject *tmp_expression_name_41;
                PyObject *tmp_args_name_11;
                PyObject *tmp_kwargs_name_15;
                PyObject *tmp_dict_key_15;
                PyObject *tmp_dict_value_15;
                PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_8);
                tmp_expression_name_41 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[0]);

                if (unlikely(tmp_expression_name_41 == NULL)) {
                    tmp_expression_name_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                }

                if (tmp_expression_name_41 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 52;
                    type_description_1 = "oooooooooo";
                    goto list_build_exception_4;
                }
                tmp_called_name_15 = LOOKUP_ATTRIBUTE(tmp_expression_name_41, mod_consts[41]);
                if (tmp_called_name_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 52;
                    type_description_1 = "oooooooooo";
                    goto list_build_exception_4;
                }
                tmp_args_name_11 = mod_consts[17];
                tmp_dict_key_15 = mod_consts[42];
                tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[43]);

                if (unlikely(tmp_dict_value_15 == NULL)) {
                    tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
                }

                if (tmp_dict_value_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_name_15);

                    exception_lineno = 52;
                    type_description_1 = "oooooooooo";
                    goto list_build_exception_4;
                }
                tmp_kwargs_name_15 = _PyDict_NewPresized( 8 );
                {
                    PyObject *tmp_expression_name_42;
                    PyObject *tmp_tuple_element_5;
                    PyObject *tmp_expression_name_43;
                    tmp_res = PyDict_SetItem(tmp_kwargs_name_15, tmp_dict_key_15, tmp_dict_value_15);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_15 = mod_consts[44];
                    tmp_dict_value_15 = mod_consts[45];
                    tmp_res = PyDict_SetItem(tmp_kwargs_name_15, tmp_dict_key_15, tmp_dict_value_15);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_15 = mod_consts[5];
                    tmp_expression_name_42 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_expression_name_42 == NULL)) {
                        tmp_expression_name_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_expression_name_42 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 52;
                        type_description_1 = "oooooooooo";
                        goto dict_build_exception_14;
                    }
                    tmp_dict_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_name_42, mod_consts[19]);
                    if (tmp_dict_value_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 52;
                        type_description_1 = "oooooooooo";
                        goto dict_build_exception_14;
                    }
                    tmp_res = PyDict_SetItem(tmp_kwargs_name_15, tmp_dict_key_15, tmp_dict_value_15);
                    Py_DECREF(tmp_dict_value_15);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_15 = mod_consts[46];
                    tmp_dict_value_15 = mod_consts[4];
                    tmp_res = PyDict_SetItem(tmp_kwargs_name_15, tmp_dict_key_15, tmp_dict_value_15);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_15 = mod_consts[35];
                    tmp_dict_value_15 = mod_consts[47];
                    tmp_res = PyDict_SetItem(tmp_kwargs_name_15, tmp_dict_key_15, tmp_dict_value_15);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_15 = mod_consts[48];
                    tmp_dict_value_15 = mod_consts[49];
                    tmp_res = PyDict_SetItem(tmp_kwargs_name_15, tmp_dict_key_15, tmp_dict_value_15);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_15 = mod_consts[9];
                    tmp_expression_name_43 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_expression_name_43 == NULL)) {
                        tmp_expression_name_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_expression_name_43 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 53;
                        type_description_1 = "oooooooooo";
                        goto dict_build_exception_14;
                    }
                    tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_43, mod_consts[50]);
                    if (tmp_tuple_element_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 53;
                        type_description_1 = "oooooooooo";
                        goto dict_build_exception_14;
                    }
                    tmp_dict_value_15 = PyTuple_New(2);
                    PyTuple_SET_ITEM(tmp_dict_value_15, 0, tmp_tuple_element_5);
                    tmp_tuple_element_5 = mod_consts[33];
                    PyTuple_SET_ITEM0(tmp_dict_value_15, 1, tmp_tuple_element_5);
                    tmp_res = PyDict_SetItem(tmp_kwargs_name_15, tmp_dict_key_15, tmp_dict_value_15);
                    Py_DECREF(tmp_dict_value_15);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_15 = mod_consts[24];
                    tmp_dict_value_15 = mod_consts[51];
                    tmp_res = PyDict_SetItem(tmp_kwargs_name_15, tmp_dict_key_15, tmp_dict_value_15);
                    assert(!(tmp_res != 0));
                }
                goto dict_build_noexception_14;
                // Exception handling pass through code for dict_build:
                dict_build_exception_14:;
                Py_DECREF(tmp_called_name_15);
                Py_DECREF(tmp_kwargs_name_15);
                goto list_build_exception_4;
                // Finished with no exception for dict_build:
                dict_build_noexception_14:;
                frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 52;
                tmp_list_element_8 = CALL_FUNCTION(tmp_called_name_15, tmp_args_name_11, tmp_kwargs_name_15);
                Py_DECREF(tmp_called_name_15);
                Py_DECREF(tmp_kwargs_name_15);
                if (tmp_list_element_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 52;
                    type_description_1 = "oooooooooo";
                    goto list_build_exception_4;
                }
                PyList_SET_ITEM(tmp_list_element_1, 1, tmp_list_element_8);
            }
            goto list_build_noexception_3;
            // Exception handling pass through code for list_build:
            list_build_exception_4:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for list_build:
            list_build_noexception_3:;
            PyList_SET_ITEM(tmp_assign_source_1, 6, tmp_list_element_1);
            tmp_expression_name_44 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_name_44 == NULL)) {
                tmp_expression_name_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_name_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_1 = "oooooooooo";
                goto list_build_exception_1;
            }
            tmp_called_name_16 = LOOKUP_ATTRIBUTE(tmp_expression_name_44, mod_consts[7]);
            if (tmp_called_name_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_1 = "oooooooooo";
                goto list_build_exception_1;
            }
            tmp_args_name_12 = mod_consts[17];
            tmp_dict_key_16 = mod_consts[18];
            tmp_expression_name_45 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_expression_name_45 == NULL)) {
                tmp_expression_name_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_expression_name_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_16);

                exception_lineno = 55;
                type_description_1 = "oooooooooo";
                goto list_build_exception_1;
            }
            tmp_dict_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_name_45, mod_consts[19]);
            if (tmp_dict_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_16);

                exception_lineno = 55;
                type_description_1 = "oooooooooo";
                goto list_build_exception_1;
            }
            tmp_kwargs_name_16 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_name_46;
                tmp_res = PyDict_SetItem(tmp_kwargs_name_16, tmp_dict_key_16, tmp_dict_value_16);
                Py_DECREF(tmp_dict_value_16);
                assert(!(tmp_res != 0));
                tmp_dict_key_16 = mod_consts[20];
                tmp_expression_name_46 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[10]);

                if (unlikely(tmp_expression_name_46 == NULL)) {
                    tmp_expression_name_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                }

                if (tmp_expression_name_46 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 55;
                    type_description_1 = "oooooooooo";
                    goto dict_build_exception_15;
                }
                tmp_dict_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_name_46, mod_consts[19]);
                if (tmp_dict_value_16 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 55;
                    type_description_1 = "oooooooooo";
                    goto dict_build_exception_15;
                }
                tmp_res = PyDict_SetItem(tmp_kwargs_name_16, tmp_dict_key_16, tmp_dict_value_16);
                Py_DECREF(tmp_dict_value_16);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_15;
            // Exception handling pass through code for dict_build:
            dict_build_exception_15:;
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_kwargs_name_16);
            goto list_build_exception_1;
            // Finished with no exception for dict_build:
            dict_build_noexception_15:;
            frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 55;
            tmp_list_element_9 = CALL_FUNCTION(tmp_called_name_16, tmp_args_name_12, tmp_kwargs_name_16);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_kwargs_name_16);
            if (tmp_list_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_1 = "oooooooooo";
                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyList_New(1);
            PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_9);
            PyList_SET_ITEM(tmp_assign_source_1, 7, tmp_list_element_1);
        }
        goto list_build_noexception_4;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assign_source_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_4:;
        assert(var_toolbar_buttons == NULL);
        var_toolbar_buttons = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_list_element_10;
        PyObject *tmp_list_element_11;
        PyObject *tmp_called_name_17;
        PyObject *tmp_expression_name_47;
        PyObject *tmp_args_name_13;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_name_17;
        PyObject *tmp_dict_key_17;
        PyObject *tmp_dict_value_17;
        PyObject *tmp_expression_name_48;
        tmp_expression_name_47 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_47 == NULL)) {
            tmp_expression_name_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_17 = LOOKUP_ATTRIBUTE(tmp_expression_name_47, mod_consts[52]);
        if (tmp_called_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_6 = mod_consts[53];
        tmp_args_name_13 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_13, 0, tmp_tuple_element_6);
        CHECK_OBJECT(var_toolbar_buttons);
        tmp_tuple_element_6 = var_toolbar_buttons;
        PyTuple_SET_ITEM0(tmp_args_name_13, 1, tmp_tuple_element_6);
        tmp_dict_key_17 = mod_consts[54];
        tmp_expression_name_48 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_name_48 == NULL)) {
            tmp_expression_name_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_name_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_17);
            Py_DECREF(tmp_args_name_13);

            exception_lineno = 61;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_name_48, mod_consts[55]);
        if (tmp_dict_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_17);
            Py_DECREF(tmp_args_name_13);

            exception_lineno = 61;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kwargs_name_17 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_name_49;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_17, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[18];
            tmp_expression_name_49 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_expression_name_49 == NULL)) {
                tmp_expression_name_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_expression_name_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_1 = "oooooooooo";
                goto dict_build_exception_16;
            }
            tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_name_49, mod_consts[19]);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_1 = "oooooooooo";
                goto dict_build_exception_16;
            }
            tmp_res = PyDict_SetItem(tmp_kwargs_name_17, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[46];
            tmp_dict_value_17 = mod_consts[56];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_17, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_16;
        // Exception handling pass through code for dict_build:
        dict_build_exception_16:;
        Py_DECREF(tmp_called_name_17);
        Py_DECREF(tmp_args_name_13);
        Py_DECREF(tmp_kwargs_name_17);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_16:;
        frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 61;
        tmp_list_element_11 = CALL_FUNCTION(tmp_called_name_17, tmp_args_name_13, tmp_kwargs_name_17);
        Py_DECREF(tmp_called_name_17);
        Py_DECREF(tmp_args_name_13);
        Py_DECREF(tmp_kwargs_name_17);
        if (tmp_list_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_list_element_10 = PyList_New(1);
        PyList_SET_ITEM(tmp_list_element_10, 0, tmp_list_element_11);
        tmp_assign_source_2 = PyList_New(2);
        {
            PyObject *tmp_list_element_12;
            PyObject *tmp_called_name_18;
            PyObject *tmp_expression_name_50;
            PyObject *tmp_args_name_14;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kwargs_name_18;
            PyObject *tmp_dict_key_18;
            PyObject *tmp_dict_value_18;
            PyList_SET_ITEM(tmp_assign_source_2, 0, tmp_list_element_10);
            tmp_expression_name_50 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_name_50 == NULL)) {
                tmp_expression_name_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_name_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_1 = "oooooooooo";
                goto list_build_exception_5;
            }
            tmp_called_name_18 = LOOKUP_ATTRIBUTE(tmp_expression_name_50, mod_consts[7]);
            if (tmp_called_name_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_1 = "oooooooooo";
                goto list_build_exception_5;
            }
            tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_tuple_element_7 == NULL)) {
                tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
            }

            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_18);

                exception_lineno = 68;
                type_description_1 = "oooooooooo";
                goto list_build_exception_5;
            }
            tmp_args_name_14 = PyTuple_New(1);
            PyTuple_SET_ITEM0(tmp_args_name_14, 0, tmp_tuple_element_7);
            tmp_dict_key_18 = mod_consts[13];
            tmp_dict_value_18 = mod_consts[58];
            tmp_kwargs_name_18 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_tuple_element_8;
                PyObject *tmp_expression_name_51;
                tmp_res = PyDict_SetItem(tmp_kwargs_name_18, tmp_dict_key_18, tmp_dict_value_18);
                assert(!(tmp_res != 0));
                tmp_dict_key_18 = mod_consts[35];
                tmp_dict_value_18 = mod_consts[59];
                tmp_res = PyDict_SetItem(tmp_kwargs_name_18, tmp_dict_key_18, tmp_dict_value_18);
                assert(!(tmp_res != 0));
                tmp_dict_key_18 = mod_consts[15];
                tmp_dict_value_18 = mod_consts[60];
                tmp_res = PyDict_SetItem(tmp_kwargs_name_18, tmp_dict_key_18, tmp_dict_value_18);
                assert(!(tmp_res != 0));
                tmp_dict_key_18 = mod_consts[9];
                tmp_expression_name_51 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[10]);

                if (unlikely(tmp_expression_name_51 == NULL)) {
                    tmp_expression_name_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                }

                if (tmp_expression_name_51 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 68;
                    type_description_1 = "oooooooooo";
                    goto dict_build_exception_17;
                }
                tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_51, mod_consts[61]);
                if (tmp_tuple_element_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 68;
                    type_description_1 = "oooooooooo";
                    goto dict_build_exception_17;
                }
                tmp_dict_value_18 = PyTuple_New(2);
                PyTuple_SET_ITEM(tmp_dict_value_18, 0, tmp_tuple_element_8);
                tmp_tuple_element_8 = mod_consts[62];
                PyTuple_SET_ITEM0(tmp_dict_value_18, 1, tmp_tuple_element_8);
                tmp_res = PyDict_SetItem(tmp_kwargs_name_18, tmp_dict_key_18, tmp_dict_value_18);
                Py_DECREF(tmp_dict_value_18);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_17;
            // Exception handling pass through code for dict_build:
            dict_build_exception_17:;
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_args_name_14);
            Py_DECREF(tmp_kwargs_name_18);
            goto list_build_exception_5;
            // Finished with no exception for dict_build:
            dict_build_noexception_17:;
            frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 68;
            tmp_list_element_12 = CALL_FUNCTION(tmp_called_name_18, tmp_args_name_14, tmp_kwargs_name_18);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_args_name_14);
            Py_DECREF(tmp_kwargs_name_18);
            if (tmp_list_element_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_1 = "oooooooooo";
                goto list_build_exception_5;
            }
            tmp_list_element_10 = PyList_New(3);
            {
                PyObject *tmp_called_name_19;
                PyObject *tmp_expression_name_52;
                PyObject *tmp_args_name_15;
                PyObject *tmp_kwargs_name_19;
                PyObject *tmp_dict_key_19;
                PyObject *tmp_dict_value_19;
                PyObject *tmp_called_name_20;
                PyObject *tmp_expression_name_54;
                PyObject *tmp_args_name_16;
                PyObject *tmp_kwargs_name_20;
                PyObject *tmp_dict_key_20;
                PyObject *tmp_dict_value_20;
                PyList_SET_ITEM(tmp_list_element_10, 0, tmp_list_element_12);
                tmp_expression_name_52 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[0]);

                if (unlikely(tmp_expression_name_52 == NULL)) {
                    tmp_expression_name_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                }

                if (tmp_expression_name_52 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 69;
                    type_description_1 = "oooooooooo";
                    goto list_build_exception_6;
                }
                tmp_called_name_19 = LOOKUP_ATTRIBUTE(tmp_expression_name_52, mod_consts[7]);
                if (tmp_called_name_19 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 69;
                    type_description_1 = "oooooooooo";
                    goto list_build_exception_6;
                }
                tmp_args_name_15 = mod_consts[63];
                tmp_dict_key_19 = mod_consts[13];
                tmp_dict_value_19 = mod_consts[64];
                tmp_kwargs_name_19 = _PyDict_NewPresized( 3 );
                {
                    PyObject *tmp_tuple_element_9;
                    PyObject *tmp_expression_name_53;
                    tmp_res = PyDict_SetItem(tmp_kwargs_name_19, tmp_dict_key_19, tmp_dict_value_19);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_19 = mod_consts[15];
                    tmp_dict_value_19 = mod_consts[65];
                    tmp_res = PyDict_SetItem(tmp_kwargs_name_19, tmp_dict_key_19, tmp_dict_value_19);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_19 = mod_consts[9];
                    tmp_expression_name_53 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_expression_name_53 == NULL)) {
                        tmp_expression_name_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_expression_name_53 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 69;
                        type_description_1 = "oooooooooo";
                        goto dict_build_exception_18;
                    }
                    tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_53, mod_consts[61]);
                    if (tmp_tuple_element_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 69;
                        type_description_1 = "oooooooooo";
                        goto dict_build_exception_18;
                    }
                    tmp_dict_value_19 = PyTuple_New(2);
                    PyTuple_SET_ITEM(tmp_dict_value_19, 0, tmp_tuple_element_9);
                    tmp_tuple_element_9 = mod_consts[62];
                    PyTuple_SET_ITEM0(tmp_dict_value_19, 1, tmp_tuple_element_9);
                    tmp_res = PyDict_SetItem(tmp_kwargs_name_19, tmp_dict_key_19, tmp_dict_value_19);
                    Py_DECREF(tmp_dict_value_19);
                    assert(!(tmp_res != 0));
                }
                goto dict_build_noexception_18;
                // Exception handling pass through code for dict_build:
                dict_build_exception_18:;
                Py_DECREF(tmp_called_name_19);
                Py_DECREF(tmp_kwargs_name_19);
                goto list_build_exception_6;
                // Finished with no exception for dict_build:
                dict_build_noexception_18:;
                frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 69;
                tmp_list_element_12 = CALL_FUNCTION(tmp_called_name_19, tmp_args_name_15, tmp_kwargs_name_19);
                Py_DECREF(tmp_called_name_19);
                Py_DECREF(tmp_kwargs_name_19);
                if (tmp_list_element_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 69;
                    type_description_1 = "oooooooooo";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_list_element_10, 1, tmp_list_element_12);
                tmp_expression_name_54 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[0]);

                if (unlikely(tmp_expression_name_54 == NULL)) {
                    tmp_expression_name_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                }

                if (tmp_expression_name_54 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 70;
                    type_description_1 = "oooooooooo";
                    goto list_build_exception_6;
                }
                tmp_called_name_20 = LOOKUP_ATTRIBUTE(tmp_expression_name_54, mod_consts[7]);
                if (tmp_called_name_20 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 70;
                    type_description_1 = "oooooooooo";
                    goto list_build_exception_6;
                }
                tmp_args_name_16 = mod_consts[17];
                tmp_dict_key_20 = mod_consts[13];
                tmp_dict_value_20 = mod_consts[66];
                tmp_kwargs_name_20 = _PyDict_NewPresized( 4 );
                {
                    PyObject *tmp_tuple_element_10;
                    PyObject *tmp_expression_name_55;
                    tmp_res = PyDict_SetItem(tmp_kwargs_name_20, tmp_dict_key_20, tmp_dict_value_20);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_20 = mod_consts[15];
                    tmp_dict_value_20 = mod_consts[65];
                    tmp_res = PyDict_SetItem(tmp_kwargs_name_20, tmp_dict_key_20, tmp_dict_value_20);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_20 = mod_consts[35];
                    tmp_dict_value_20 = mod_consts[67];
                    tmp_res = PyDict_SetItem(tmp_kwargs_name_20, tmp_dict_key_20, tmp_dict_value_20);
                    assert(!(tmp_res != 0));
                    tmp_dict_key_20 = mod_consts[9];
                    tmp_expression_name_55 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_expression_name_55 == NULL)) {
                        tmp_expression_name_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_expression_name_55 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 70;
                        type_description_1 = "oooooooooo";
                        goto dict_build_exception_19;
                    }
                    tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_55, mod_consts[61]);
                    if (tmp_tuple_element_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 70;
                        type_description_1 = "oooooooooo";
                        goto dict_build_exception_19;
                    }
                    tmp_dict_value_20 = PyTuple_New(2);
                    PyTuple_SET_ITEM(tmp_dict_value_20, 0, tmp_tuple_element_10);
                    tmp_tuple_element_10 = mod_consts[62];
                    PyTuple_SET_ITEM0(tmp_dict_value_20, 1, tmp_tuple_element_10);
                    tmp_res = PyDict_SetItem(tmp_kwargs_name_20, tmp_dict_key_20, tmp_dict_value_20);
                    Py_DECREF(tmp_dict_value_20);
                    assert(!(tmp_res != 0));
                }
                goto dict_build_noexception_19;
                // Exception handling pass through code for dict_build:
                dict_build_exception_19:;
                Py_DECREF(tmp_called_name_20);
                Py_DECREF(tmp_kwargs_name_20);
                goto list_build_exception_6;
                // Finished with no exception for dict_build:
                dict_build_noexception_19:;
                frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 70;
                tmp_list_element_12 = CALL_FUNCTION(tmp_called_name_20, tmp_args_name_16, tmp_kwargs_name_20);
                Py_DECREF(tmp_called_name_20);
                Py_DECREF(tmp_kwargs_name_20);
                if (tmp_list_element_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 70;
                    type_description_1 = "oooooooooo";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_list_element_10, 2, tmp_list_element_12);
            }
            goto list_build_noexception_5;
            // Exception handling pass through code for list_build:
            list_build_exception_6:;
            Py_DECREF(tmp_list_element_10);
            goto list_build_exception_5;
            // Finished with no exception for list_build:
            list_build_noexception_5:;
            PyList_SET_ITEM(tmp_assign_source_2, 1, tmp_list_element_10);
        }
        goto list_build_noexception_6;
        // Exception handling pass through code for list_build:
        list_build_exception_5:;
        Py_DECREF(tmp_assign_source_2);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_6:;
        assert(var_layout == NULL);
        var_layout = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_21;
        PyObject *tmp_expression_name_56;
        PyObject *tmp_args_name_17;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_kwargs_name_21;
        tmp_expression_name_56 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_56 == NULL)) {
            tmp_expression_name_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_21 = LOOKUP_ATTRIBUTE(tmp_expression_name_56, mod_consts[68]);
        if (tmp_called_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_11 = mod_consts[69];
        tmp_args_name_17 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_17, 0, tmp_tuple_element_11);
        CHECK_OBJECT(var_layout);
        tmp_tuple_element_11 = var_layout;
        PyTuple_SET_ITEM0(tmp_args_name_17, 1, tmp_tuple_element_11);
        tmp_kwargs_name_21 = PyDict_Copy(mod_consts[70]);
        frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 78;
        tmp_assign_source_3 = CALL_FUNCTION(tmp_called_name_21, tmp_args_name_17, tmp_kwargs_name_21);
        Py_DECREF(tmp_called_name_21);
        Py_DECREF(tmp_args_name_17);
        Py_DECREF(tmp_kwargs_name_21);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_window == NULL);
        var_window = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_57;
        tmp_expression_name_57 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_expression_name_57 == NULL)) {
            tmp_expression_name_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        if (tmp_expression_name_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_57, mod_consts[71]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 81;
        tmp_assign_source_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[72]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_start_time == NULL);
        var_start_time = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = mod_consts[73];
        assert(var_age == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_age = tmp_assign_source_5;
    }
    {
        PyObject *tmp_called_name_22;
        PyObject *tmp_expression_name_58;
        PyObject *tmp_expression_name_59;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kwargs_name_22;
        CHECK_OBJECT(var_window);
        tmp_expression_name_59 = var_window;
        tmp_subscript_name_1 = mod_consts[47];
        tmp_expression_name_58 = LOOKUP_SUBSCRIPT(tmp_expression_name_59, tmp_subscript_name_1);
        if (tmp_expression_name_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_22 = LOOKUP_ATTRIBUTE(tmp_expression_name_58, mod_consts[74]);
        Py_DECREF(tmp_expression_name_58);
        if (tmp_called_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kwargs_name_22 = PyDict_Copy(mod_consts[75]);
        frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 84;
        tmp_call_result_2 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_22, tmp_kwargs_name_22);
        Py_DECREF(tmp_called_name_22);
        Py_DECREF(tmp_kwargs_name_22);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    loop_start_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_23;
        PyObject *tmp_expression_name_60;
        PyObject *tmp_kwargs_name_23;
        if (var_window == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 90;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_name_60 = var_window;
        tmp_called_name_23 = LOOKUP_ATTRIBUTE(tmp_expression_name_60, mod_consts[77]);
        if (tmp_called_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_kwargs_name_23 = PyDict_Copy(mod_consts[78]);
        frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 90;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_23, tmp_kwargs_name_23);
        Py_DECREF(tmp_called_name_23);
        Py_DECREF(tmp_kwargs_name_23);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_7 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 90;
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_8 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 90;
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooooo";
                    exception_lineno = 90;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[79];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooo";
            exception_lineno = 90;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_event;
            var_event = tmp_assign_source_9;
            Py_INCREF(var_event);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_values;
            var_values = tmp_assign_source_10;
            Py_INCREF(var_values);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_61;
        CHECK_OBJECT(var_event);
        tmp_compexpr_left_1 = var_event;
        tmp_expression_name_61 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_61 == NULL)) {
            tmp_expression_name_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_61, mod_consts[80]);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        assert(tmp_condition_result_1 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_name_62;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_1;
        if (var_window == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 95;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_62 = var_window;
        tmp_subscript_name_2 = mod_consts[67];
        tmp_called_instance_2 = LOOKUP_SUBSCRIPT(tmp_expression_name_62, tmp_subscript_name_2);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_values);
        tmp_args_element_name_1 = var_values;
        frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 95;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[74], tmp_args_element_name_1);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(var_event);
        tmp_compexpr_left_2 = var_event;
        tmp_compexpr_right_2 = mod_consts[81];
        tmp_res = PySequence_Contains(tmp_compexpr_right_2, tmp_compexpr_left_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    goto loop_end_1;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_tmp_condition_result_3_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_event);
        tmp_compexpr_left_3 = var_event;
        tmp_compexpr_right_3 = mod_consts[36];
        tmp_tmp_condition_result_3_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        if (tmp_tmp_condition_result_3_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_3_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_3_object_1);

            exception_lineno = 100;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_3_object_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_expression_name_63;
        PyObject *tmp_subscript_name_3;
        if (var_values == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[82]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 102;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_name_63 = var_values;
        tmp_subscript_name_3 = mod_consts[36];
        tmp_assign_source_11 = LOOKUP_SUBSCRIPT(tmp_expression_name_63, tmp_subscript_name_3);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_age;
            var_age = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_int_arg_1;
        CHECK_OBJECT(var_age);
        tmp_int_arg_1 = var_age;
        tmp_assign_source_12 = PyNumber_Int(tmp_int_arg_1);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_age;
            var_age = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_24;
        PyObject *tmp_expression_name_64;
        PyObject *tmp_expression_name_65;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_call_result_4;
        PyObject *tmp_kwargs_name_24;
        if (var_window == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 105;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_name_65 = var_window;
        tmp_subscript_name_4 = mod_consts[47];
        tmp_expression_name_64 = LOOKUP_SUBSCRIPT(tmp_expression_name_65, tmp_subscript_name_4);
        if (tmp_expression_name_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        tmp_called_name_24 = LOOKUP_ATTRIBUTE(tmp_expression_name_64, mod_consts[74]);
        Py_DECREF(tmp_expression_name_64);
        if (tmp_called_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        tmp_kwargs_name_24 = PyDict_Copy(mod_consts[83]);
        frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 105;
        tmp_call_result_4 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_24, tmp_kwargs_name_24);
        Py_DECREF(tmp_called_name_24);
        Py_DECREF(tmp_kwargs_name_24);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_tmp_or_left_value_1_object_1;
        int tmp_truth_name_2;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_tmp_or_right_value_1_object_1;
        int tmp_truth_name_3;
        CHECK_OBJECT(var_age);
        tmp_compexpr_left_4 = var_age;
        tmp_compexpr_right_4 = mod_consts[84];
        tmp_tmp_or_left_value_1_object_1 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
        if (tmp_tmp_or_left_value_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_tmp_or_left_value_1_object_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_or_left_value_1_object_1);

            exception_lineno = 106;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        tmp_or_left_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_or_left_value_1_object_1);
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_age);
        tmp_compexpr_left_5 = var_age;
        tmp_compexpr_right_5 = mod_consts[85];
        tmp_tmp_or_right_value_1_object_1 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
        if (tmp_tmp_or_right_value_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_tmp_or_right_value_1_object_1);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_or_right_value_1_object_1);

            exception_lineno = 106;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        tmp_or_right_value_1 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_or_right_value_1_object_1);
        tmp_condition_result_4 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_4 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[53];
        {
            PyObject *old = var_age;
            assert(old != NULL);
            var_age = tmp_assign_source_13;
            Py_INCREF(var_age);
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_25;
        PyObject *tmp_expression_name_66;
        PyObject *tmp_expression_name_67;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_unicode_arg_1;
        if (var_window == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 108;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_name_67 = var_window;
        tmp_subscript_name_5 = mod_consts[36];
        tmp_expression_name_66 = LOOKUP_SUBSCRIPT(tmp_expression_name_67, tmp_subscript_name_5);
        if (tmp_expression_name_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        tmp_called_name_25 = LOOKUP_ATTRIBUTE(tmp_expression_name_66, mod_consts[74]);
        Py_DECREF(tmp_expression_name_66);
        if (tmp_called_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_age);
        tmp_unicode_arg_1 = var_age;
        tmp_args_element_name_2 = PyObject_Unicode(tmp_unicode_arg_1);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_25);

            exception_lineno = 108;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 108;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_25, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_25);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_name_68;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_call_result_6;
        if (var_window == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 109;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_name_68 = var_window;
        tmp_subscript_name_6 = mod_consts[39];
        tmp_called_instance_3 = LOOKUP_SUBSCRIPT(tmp_expression_name_68, tmp_subscript_name_6);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 109;
        tmp_call_result_6 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_3,
            mod_consts[74],
            &PyTuple_GET_ITEM(mod_consts[86], 0)
        );

        Py_DECREF(tmp_called_instance_3);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_name_26;
        PyObject *tmp_expression_name_69;
        PyObject *tmp_expression_name_70;
        PyObject *tmp_subscript_name_7;
        PyObject *tmp_call_result_7;
        PyObject *tmp_kwargs_name_25;
        if (var_window == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 111;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_name_70 = var_window;
        tmp_subscript_name_7 = mod_consts[47];
        tmp_expression_name_69 = LOOKUP_SUBSCRIPT(tmp_expression_name_70, tmp_subscript_name_7);
        if (tmp_expression_name_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        tmp_called_name_26 = LOOKUP_ATTRIBUTE(tmp_expression_name_69, mod_consts[74]);
        Py_DECREF(tmp_expression_name_69);
        if (tmp_called_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        tmp_kwargs_name_25 = PyDict_Copy(mod_consts[75]);
        frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 111;
        tmp_call_result_7 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_26, tmp_kwargs_name_25);
        Py_DECREF(tmp_called_name_26);
        Py_DECREF(tmp_kwargs_name_25);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_name_27;
        PyObject *tmp_expression_name_71;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_name_18;
        PyObject *tmp_kwargs_name_26;
        PyObject *tmp_dict_key_21;
        PyObject *tmp_dict_value_21;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_expression_name_72;
        tmp_expression_name_71 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_71 == NULL)) {
            tmp_expression_name_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        tmp_called_name_27 = LOOKUP_ATTRIBUTE(tmp_expression_name_71, mod_consts[87]);
        if (tmp_called_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        tmp_args_name_18 = mod_consts[88];
        tmp_dict_key_21 = mod_consts[9];
        tmp_expression_name_72 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_name_72 == NULL)) {
            tmp_expression_name_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_name_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_27);

            exception_lineno = 112;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tmp_expression_name_72, mod_consts[11]);
        if (tmp_tuple_element_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_27);

            exception_lineno = 112;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        tmp_dict_value_21 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_dict_value_21, 0, tmp_tuple_element_12);
        tmp_tuple_element_12 = mod_consts[33];
        PyTuple_SET_ITEM0(tmp_dict_value_21, 1, tmp_tuple_element_12);
        tmp_kwargs_name_26 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_26, tmp_dict_key_21, tmp_dict_value_21);
        Py_DECREF(tmp_dict_value_21);
        assert(!(tmp_res != 0));
        tmp_dict_key_21 = mod_consts[89];
        tmp_dict_value_21 = mod_consts[90];
        tmp_res = PyDict_SetItem(tmp_kwargs_name_26, tmp_dict_key_21, tmp_dict_value_21);
        assert(!(tmp_res != 0));
        tmp_dict_key_21 = mod_consts[91];
        tmp_dict_value_21 = mod_consts[49];
        tmp_res = PyDict_SetItem(tmp_kwargs_name_26, tmp_dict_key_21, tmp_dict_value_21);
        assert(!(tmp_res != 0));
        tmp_dict_key_21 = mod_consts[92];
        tmp_dict_value_21 = Py_True;
        tmp_res = PyDict_SetItem(tmp_kwargs_name_26, tmp_dict_key_21, tmp_dict_value_21);
        assert(!(tmp_res != 0));
        frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 112;
        tmp_call_result_8 = CALL_FUNCTION(tmp_called_name_27, tmp_args_name_18, tmp_kwargs_name_26);
        Py_DECREF(tmp_called_name_27);
        Py_DECREF(tmp_kwargs_name_26);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_8);
    }
    goto loop_start_1;
    branch_no_4:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_ad9f8e920ccb9599254317edd08ec111, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_ad9f8e920ccb9599254317edd08ec111, exception_keeper_lineno_3);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_3, exception_keeper_tb_3);
    PUBLISH_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        tmp_compexpr_left_6 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_6 = PyExc_ValueError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_6, tmp_compexpr_right_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_5 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = EXC_VALUE(PyThreadState_GET());
        {
            PyObject *old = var_err;
            var_err = tmp_assign_source_14;
            Py_INCREF(var_err);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_name_3;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_err);
        tmp_args_element_name_3 = var_err;
        frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 117;
        tmp_call_result_9 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[93], tmp_args_element_name_3);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_10;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oooooooooo";
            goto try_except_handler_6;
        }
        frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 118;
        tmp_call_result_10 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_5,
            mod_consts[93],
            &PyTuple_GET_ITEM(mod_consts[94], 0)
        );

        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[53];
        {
            PyObject *old = var_age;
            var_age = tmp_assign_source_15;
            Py_INCREF(var_age);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_28;
        PyObject *tmp_expression_name_73;
        PyObject *tmp_expression_name_74;
        PyObject *tmp_subscript_name_8;
        PyObject *tmp_call_result_11;
        PyObject *tmp_kwargs_name_27;
        if (var_window == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 121;
            type_description_1 = "oooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_name_74 = var_window;
        tmp_subscript_name_8 = mod_consts[47];
        tmp_expression_name_73 = LOOKUP_SUBSCRIPT(tmp_expression_name_74, tmp_subscript_name_8);
        if (tmp_expression_name_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_name_28 = LOOKUP_ATTRIBUTE(tmp_expression_name_73, mod_consts[74]);
        Py_DECREF(tmp_expression_name_73);
        if (tmp_called_name_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooooooooo";
            goto try_except_handler_6;
        }
        tmp_kwargs_name_27 = PyDict_Copy(mod_consts[75]);
        frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 121;
        tmp_call_result_11 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_28, tmp_kwargs_name_27);
        Py_DECREF(tmp_called_name_28);
        Py_DECREF(tmp_kwargs_name_27);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_name_29;
        PyObject *tmp_expression_name_75;
        PyObject *tmp_expression_name_76;
        PyObject *tmp_subscript_name_9;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_unicode_arg_2;
        if (var_window == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 122;
            type_description_1 = "oooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_name_76 = var_window;
        tmp_subscript_name_9 = mod_consts[36];
        tmp_expression_name_75 = LOOKUP_SUBSCRIPT(tmp_expression_name_76, tmp_subscript_name_9);
        if (tmp_expression_name_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_name_29 = LOOKUP_ATTRIBUTE(tmp_expression_name_75, mod_consts[74]);
        Py_DECREF(tmp_expression_name_75);
        if (tmp_called_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_age);
        tmp_unicode_arg_2 = var_age;
        tmp_args_element_name_4 = PyObject_Unicode(tmp_unicode_arg_2);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_29);

            exception_lineno = 122;
            type_description_1 = "oooooooooo";
            goto try_except_handler_6;
        }
        frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 122;
        tmp_call_result_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_29, tmp_args_element_name_4);
        Py_DECREF(tmp_called_name_29);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_name_30;
        PyObject *tmp_expression_name_77;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_name_19;
        PyObject *tmp_kwargs_name_28;
        PyObject *tmp_dict_key_22;
        PyObject *tmp_dict_value_22;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_expression_name_78;
        tmp_expression_name_77 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_77 == NULL)) {
            tmp_expression_name_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_name_30 = LOOKUP_ATTRIBUTE(tmp_expression_name_77, mod_consts[87]);
        if (tmp_called_name_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_name_19 = mod_consts[88];
        tmp_dict_key_22 = mod_consts[9];
        tmp_expression_name_78 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_name_78 == NULL)) {
            tmp_expression_name_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_name_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_30);

            exception_lineno = 123;
            type_description_1 = "oooooooooo";
            goto try_except_handler_6;
        }
        tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_78, mod_consts[11]);
        if (tmp_tuple_element_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_30);

            exception_lineno = 123;
            type_description_1 = "oooooooooo";
            goto try_except_handler_6;
        }
        tmp_dict_value_22 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_dict_value_22, 0, tmp_tuple_element_13);
        tmp_tuple_element_13 = mod_consts[33];
        PyTuple_SET_ITEM0(tmp_dict_value_22, 1, tmp_tuple_element_13);
        tmp_kwargs_name_28 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_28, tmp_dict_key_22, tmp_dict_value_22);
        Py_DECREF(tmp_dict_value_22);
        assert(!(tmp_res != 0));
        tmp_dict_key_22 = mod_consts[89];
        tmp_dict_value_22 = mod_consts[90];
        tmp_res = PyDict_SetItem(tmp_kwargs_name_28, tmp_dict_key_22, tmp_dict_value_22);
        assert(!(tmp_res != 0));
        tmp_dict_key_22 = mod_consts[91];
        tmp_dict_value_22 = mod_consts[49];
        tmp_res = PyDict_SetItem(tmp_kwargs_name_28, tmp_dict_key_22, tmp_dict_value_22);
        assert(!(tmp_res != 0));
        tmp_dict_key_22 = mod_consts[92];
        tmp_dict_value_22 = Py_True;
        tmp_res = PyDict_SetItem(tmp_kwargs_name_28, tmp_dict_key_22, tmp_dict_value_22);
        assert(!(tmp_res != 0));
        frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 123;
        tmp_call_result_13 = CALL_FUNCTION(tmp_called_name_30, tmp_args_name_19, tmp_kwargs_name_28);
        Py_DECREF(tmp_called_name_30);
        Py_DECREF(tmp_kwargs_name_28);
        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_13);
    }
    goto try_continue_handler_6;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_err);
    var_err = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_5;
    // try continue handler code:
    try_continue_handler_6:;
    Py_XDECREF(var_err);
    var_err = NULL;

    goto try_continue_handler_5;
    // End of try:
    goto branch_end_5;
    branch_no_5:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        tmp_compexpr_left_7 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_7 = PyExc_KeyboardInterrupt;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_7, tmp_compexpr_right_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_6 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = EXC_VALUE(PyThreadState_GET());
        {
            PyObject *old = var_err;
            var_err = tmp_assign_source_16;
            Py_INCREF(var_err);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_14;
        PyObject *tmp_args_element_name_5;
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooooooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT(var_err);
        tmp_args_element_name_5 = var_err;
        frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 128;
        tmp_call_result_14 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[93], tmp_args_element_name_5);
        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooooooo";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_call_result_15;
        tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_7 == NULL)) {
            tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooooooooo";
            goto try_except_handler_7;
        }
        frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 129;
        tmp_call_result_15 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_7,
            mod_consts[93],
            &PyTuple_GET_ITEM(mod_consts[95], 0)
        );

        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooooooooo";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[53];
        {
            PyObject *old = var_age;
            var_age = tmp_assign_source_17;
            Py_INCREF(var_age);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_31;
        PyObject *tmp_expression_name_79;
        PyObject *tmp_expression_name_80;
        PyObject *tmp_subscript_name_10;
        PyObject *tmp_call_result_16;
        PyObject *tmp_kwargs_name_29;
        if (var_window == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 132;
            type_description_1 = "oooooooooo";
            goto try_except_handler_7;
        }

        tmp_expression_name_80 = var_window;
        tmp_subscript_name_10 = mod_consts[47];
        tmp_expression_name_79 = LOOKUP_SUBSCRIPT(tmp_expression_name_80, tmp_subscript_name_10);
        if (tmp_expression_name_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooooo";
            goto try_except_handler_7;
        }
        tmp_called_name_31 = LOOKUP_ATTRIBUTE(tmp_expression_name_79, mod_consts[74]);
        Py_DECREF(tmp_expression_name_79);
        if (tmp_called_name_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooooo";
            goto try_except_handler_7;
        }
        tmp_kwargs_name_29 = PyDict_Copy(mod_consts[75]);
        frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 132;
        tmp_call_result_16 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_31, tmp_kwargs_name_29);
        Py_DECREF(tmp_called_name_31);
        Py_DECREF(tmp_kwargs_name_29);
        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooooo";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_16);
    }
    goto try_continue_handler_7;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_err);
    var_err = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_5;
    // try continue handler code:
    try_continue_handler_7:;
    Py_XDECREF(var_err);
    var_err = NULL;

    goto try_continue_handler_5;
    // End of try:
    goto branch_end_6;
    branch_no_6:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 101;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_ad9f8e920ccb9599254317edd08ec111->m_frame) frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooo";
    goto try_except_handler_5;
    branch_end_6:;
    branch_end_5:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // try continue handler code:
    try_continue_handler_5:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto loop_start_1;
    // End of try:
    // End of try:
    try_end_3:;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_name_32;
        PyObject *tmp_expression_name_81;
        PyObject *tmp_args_element_name_6;
        tmp_expression_name_81 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_expression_name_81 == NULL)) {
            tmp_expression_name_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        if (tmp_expression_name_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_32 = LOOKUP_ATTRIBUTE(tmp_expression_name_81, mod_consts[97]);
        if (tmp_called_name_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_age == NULL) {
            Py_DECREF(tmp_called_name_32);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[98]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 135;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_6 = var_age;
        frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 135;
        tmp_assign_source_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_32, tmp_args_element_name_6);
        Py_DECREF(tmp_called_name_32);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ageinhours;
            var_ageinhours = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_33;
        PyObject *tmp_expression_name_82;
        PyObject *tmp_expression_name_83;
        PyObject *tmp_subscript_name_11;
        PyObject *tmp_call_result_17;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_left_name_1;
        PyObject *tmp_unicode_arg_3;
        PyObject *tmp_right_name_1;
        if (var_window == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 136;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_83 = var_window;
        tmp_subscript_name_11 = mod_consts[39];
        tmp_expression_name_82 = LOOKUP_SUBSCRIPT(tmp_expression_name_83, tmp_subscript_name_11);
        if (tmp_expression_name_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_33 = LOOKUP_ATTRIBUTE(tmp_expression_name_82, mod_consts[74]);
        Py_DECREF(tmp_expression_name_82);
        if (tmp_called_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ageinhours);
        tmp_unicode_arg_3 = var_ageinhours;
        tmp_left_name_1 = PyObject_Unicode(tmp_unicode_arg_3);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_33);

            exception_lineno = 136;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = mod_consts[99];
        tmp_args_element_name_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        if (tmp_args_element_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_33);

            exception_lineno = 136;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 136;
        tmp_call_result_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_33, tmp_args_element_name_7);
        Py_DECREF(tmp_called_name_33);
        Py_DECREF(tmp_args_element_name_7);
        if (tmp_call_result_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        PyObject *tmp_tmp_condition_result_7_object_1;
        int tmp_truth_name_4;
        CHECK_OBJECT(var_event);
        tmp_compexpr_left_8 = var_event;
        tmp_compexpr_right_8 = mod_consts[47];
        tmp_tmp_condition_result_7_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_8, tmp_compexpr_right_8);
        if (tmp_tmp_condition_result_7_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_tmp_condition_result_7_object_1);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_7_object_1);

            exception_lineno = 138;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_7_object_1);
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_open_filename_1;
        PyObject *tmp_open_mode_1;
        tmp_open_filename_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_open_filename_1 == NULL)) {
            tmp_open_filename_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
        }

        if (tmp_open_filename_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooooooooo";
            goto try_except_handler_8;
        }
        tmp_open_mode_1 = mod_consts[101];
        tmp_assign_source_19 = BUILTIN_OPEN(tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_with_1__source;
            tmp_with_1__source = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_name_34;
        PyObject *tmp_expression_name_84;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_name_84 = tmp_with_1__source;
        tmp_called_name_34 = LOOKUP_SPECIAL(tmp_expression_name_84, mod_consts[102]);
        if (tmp_called_name_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooooooooo";
            goto try_except_handler_8;
        }
        frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 139;
        tmp_assign_source_20 = CALL_FUNCTION_NO_ARGS(tmp_called_name_34);
        Py_DECREF(tmp_called_name_34);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_with_1__enter;
            tmp_with_1__enter = tmp_assign_source_20;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_expression_name_85;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_name_85 = tmp_with_1__source;
        tmp_assign_source_21 = LOOKUP_SPECIAL(tmp_expression_name_85, mod_consts[103]);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_with_1__exit;
            tmp_with_1__exit = tmp_assign_source_21;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_assign_source_22;
        tmp_assign_source_22 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(tmp_with_1__enter);
        tmp_assign_source_23 = tmp_with_1__enter;
        {
            PyObject *old = var_w;
            var_w = tmp_assign_source_23;
            Py_INCREF(var_w);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_instance_8;
        PyObject *tmp_call_result_18;
        CHECK_OBJECT(var_w);
        tmp_called_instance_8 = var_w;
        frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 140;
        tmp_call_result_18 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_8,
            mod_consts[104],
            &PyTuple_GET_ITEM(mod_consts[105], 0)
        );

        if (tmp_call_result_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooooooooo";
            goto try_except_handler_10;
        }
        Py_DECREF(tmp_call_result_18);
    }
    {
        PyObject *tmp_called_name_35;
        PyObject *tmp_expression_name_86;
        PyObject *tmp_call_result_19;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_unicode_arg_4;
        if (var_w == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 141;
            type_description_1 = "oooooooooo";
            goto try_except_handler_10;
        }

        tmp_expression_name_86 = var_w;
        tmp_called_name_35 = LOOKUP_ATTRIBUTE(tmp_expression_name_86, mod_consts[104]);
        if (tmp_called_name_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooooooooo";
            goto try_except_handler_10;
        }
        if (var_age == NULL) {
            Py_DECREF(tmp_called_name_35);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[98]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 141;
            type_description_1 = "oooooooooo";
            goto try_except_handler_10;
        }

        tmp_unicode_arg_4 = var_age;
        tmp_args_element_name_8 = PyObject_Unicode(tmp_unicode_arg_4);
        if (tmp_args_element_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_35);

            exception_lineno = 141;
            type_description_1 = "oooooooooo";
            goto try_except_handler_10;
        }
        frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 141;
        tmp_call_result_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_35, tmp_args_element_name_8);
        Py_DECREF(tmp_called_name_35);
        Py_DECREF(tmp_args_element_name_8);
        if (tmp_call_result_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooooooooo";
            goto try_except_handler_10;
        }
        Py_DECREF(tmp_call_result_19);
    }
    {
        PyObject *tmp_called_instance_9;
        PyObject *tmp_call_result_20;
        if (var_w == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 142;
            type_description_1 = "oooooooooo";
            goto try_except_handler_10;
        }

        tmp_called_instance_9 = var_w;
        frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 142;
        tmp_call_result_20 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_9,
            mod_consts[104],
            &PyTuple_GET_ITEM(mod_consts[107], 0)
        );

        if (tmp_call_result_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oooooooooo";
            goto try_except_handler_10;
        }
        Py_DECREF(tmp_call_result_20);
    }
    {
        PyObject *tmp_called_instance_10;
        PyObject *tmp_call_result_21;
        if (var_w == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 143;
            type_description_1 = "oooooooooo";
            goto try_except_handler_10;
        }

        tmp_called_instance_10 = var_w;
        frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 143;
        tmp_call_result_21 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_10,
            mod_consts[104],
            &PyTuple_GET_ITEM(mod_consts[108], 0)
        );

        if (tmp_call_result_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "oooooooooo";
            goto try_except_handler_10;
        }
        Py_DECREF(tmp_call_result_21);
    }
    {
        PyObject *tmp_called_name_36;
        PyObject *tmp_expression_name_87;
        PyObject *tmp_call_result_22;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_unicode_arg_5;
        if (var_w == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 144;
            type_description_1 = "oooooooooo";
            goto try_except_handler_10;
        }

        tmp_expression_name_87 = var_w;
        tmp_called_name_36 = LOOKUP_ATTRIBUTE(tmp_expression_name_87, mod_consts[104]);
        if (tmp_called_name_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooooooooo";
            goto try_except_handler_10;
        }
        CHECK_OBJECT(var_ageinhours);
        tmp_unicode_arg_5 = var_ageinhours;
        tmp_args_element_name_9 = PyObject_Unicode(tmp_unicode_arg_5);
        if (tmp_args_element_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_36);

            exception_lineno = 144;
            type_description_1 = "oooooooooo";
            goto try_except_handler_10;
        }
        frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 144;
        tmp_call_result_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_36, tmp_args_element_name_9);
        Py_DECREF(tmp_called_name_36);
        Py_DECREF(tmp_args_element_name_9);
        if (tmp_call_result_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooooooooo";
            goto try_except_handler_10;
        }
        Py_DECREF(tmp_call_result_22);
    }
    {
        PyObject *tmp_called_instance_11;
        PyObject *tmp_call_result_23;
        if (var_w == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 145;
            type_description_1 = "oooooooooo";
            goto try_except_handler_10;
        }

        tmp_called_instance_11 = var_w;
        frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 145;
        tmp_call_result_23 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_11,
            mod_consts[104],
            &PyTuple_GET_ITEM(mod_consts[109], 0)
        );

        if (tmp_call_result_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "oooooooooo";
            goto try_except_handler_10;
        }
        Py_DECREF(tmp_call_result_23);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 2.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_2, &exception_preserved_value_2, &exception_preserved_tb_2);

    if (exception_keeper_tb_7 == NULL) {
        exception_keeper_tb_7 = MAKE_TRACEBACK(frame_ad9f8e920ccb9599254317edd08ec111, exception_keeper_lineno_7);
    } else if (exception_keeper_lineno_7 != 0) {
        exception_keeper_tb_7 = ADD_TRACEBACK(exception_keeper_tb_7, frame_ad9f8e920ccb9599254317edd08ec111, exception_keeper_lineno_7);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_7, exception_keeper_tb_7);
    PUBLISH_EXCEPTION(&exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7);
    // Tried code:
    {
        bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        tmp_compexpr_left_9 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_9 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_9, tmp_compexpr_right_9);
        assert(!(tmp_res == -1));
        tmp_condition_result_8 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        nuitka_bool tmp_assign_source_24;
        tmp_assign_source_24 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_24;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_37;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_name_37 = tmp_with_1__exit;
        tmp_args_element_name_10 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_name_11 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_name_12 = EXC_TRACEBACK(PyThreadState_GET());
        frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 145;
        {
            PyObject *call_args[] = {tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12};
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_37, call_args);
        }

        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "oooooooooo";
            goto try_except_handler_11;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "oooooooooo";
            goto try_except_handler_11;
        }
        tmp_condition_result_9 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 145;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_ad9f8e920ccb9599254317edd08ec111->m_frame) frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooo";
    goto try_except_handler_11;
    branch_no_9:;
    goto branch_end_8;
    branch_no_8:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 139;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_ad9f8e920ccb9599254317edd08ec111->m_frame) frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooo";
    goto try_except_handler_11;
    branch_end_8:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_9;
    // End of try:
    try_end_5:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    goto try_end_4;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_4:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_10;
        nuitka_bool tmp_compexpr_left_10;
        nuitka_bool tmp_compexpr_right_10;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_10 = tmp_with_1__indicator;
        tmp_compexpr_right_10 = NUITKA_BOOL_TRUE;
        tmp_condition_result_10 = (tmp_compexpr_left_10 == tmp_compexpr_right_10) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_called_name_38;
        PyObject *tmp_call_result_24;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_name_38 = tmp_with_1__exit;
        frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 145;
        tmp_call_result_24 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_38, &PyTuple_GET_ITEM(mod_consts[110], 0));

        if (tmp_call_result_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_9);
            Py_XDECREF(exception_keeper_value_9);
            Py_XDECREF(exception_keeper_tb_9);

            exception_lineno = 145;
            type_description_1 = "oooooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_24);
    }
    branch_no_10:;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto try_except_handler_8;
    // End of try:
    try_end_6:;
    {
        bool tmp_condition_result_11;
        nuitka_bool tmp_compexpr_left_11;
        nuitka_bool tmp_compexpr_right_11;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_11 = tmp_with_1__indicator;
        tmp_compexpr_right_11 = NUITKA_BOOL_TRUE;
        tmp_condition_result_11 = (tmp_compexpr_left_11 == tmp_compexpr_right_11) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_called_name_39;
        PyObject *tmp_call_result_25;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_name_39 = tmp_with_1__exit;
        frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 145;
        tmp_call_result_25 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_39, &PyTuple_GET_ITEM(mod_consts[110], 0));

        if (tmp_call_result_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "oooooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_25);
    }
    branch_no_11:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    {
        PyObject *tmp_called_name_40;
        PyObject *tmp_expression_name_88;
        PyObject *tmp_call_result_26;
        PyObject *tmp_args_name_20;
        PyObject *tmp_kwargs_name_30;
        PyObject *tmp_dict_key_23;
        PyObject *tmp_dict_value_23;
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_expression_name_89;
        tmp_expression_name_88 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_88 == NULL)) {
            tmp_expression_name_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_40 = LOOKUP_ATTRIBUTE(tmp_expression_name_88, mod_consts[111]);
        if (tmp_called_name_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_20 = mod_consts[112];
        tmp_dict_key_23 = mod_consts[9];
        tmp_expression_name_89 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_name_89 == NULL)) {
            tmp_expression_name_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_name_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_40);

            exception_lineno = 147;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tmp_expression_name_89, mod_consts[11]);
        if (tmp_tuple_element_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_40);

            exception_lineno = 147;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_23 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_dict_value_23, 0, tmp_tuple_element_14);
        tmp_tuple_element_14 = mod_consts[33];
        PyTuple_SET_ITEM0(tmp_dict_value_23, 1, tmp_tuple_element_14);
        tmp_kwargs_name_30 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_30, tmp_dict_key_23, tmp_dict_value_23);
        Py_DECREF(tmp_dict_value_23);
        assert(!(tmp_res != 0));
        tmp_dict_key_23 = mod_consts[89];
        tmp_dict_value_23 = mod_consts[113];
        tmp_res = PyDict_SetItem(tmp_kwargs_name_30, tmp_dict_key_23, tmp_dict_value_23);
        assert(!(tmp_res != 0));
        tmp_dict_key_23 = mod_consts[91];
        tmp_dict_value_23 = mod_consts[49];
        tmp_res = PyDict_SetItem(tmp_kwargs_name_30, tmp_dict_key_23, tmp_dict_value_23);
        assert(!(tmp_res != 0));
        tmp_dict_key_23 = mod_consts[92];
        tmp_dict_value_23 = Py_True;
        tmp_res = PyDict_SetItem(tmp_kwargs_name_30, tmp_dict_key_23, tmp_dict_value_23);
        assert(!(tmp_res != 0));
        frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 147;
        tmp_call_result_26 = CALL_FUNCTION(tmp_called_name_40, tmp_args_name_20, tmp_kwargs_name_30);
        Py_DECREF(tmp_called_name_40);
        Py_DECREF(tmp_kwargs_name_30);
        if (tmp_call_result_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_26);
    }
    branch_no_7:;
    {
        PyObject *tmp_called_name_41;
        PyObject *tmp_expression_name_90;
        PyObject *tmp_expression_name_91;
        PyObject *tmp_subscript_name_12;
        PyObject *tmp_call_result_27;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_unicode_arg_6;
        PyObject *tmp_left_name_2;
        PyObject *tmp_called_instance_12;
        PyObject *tmp_expression_name_92;
        PyObject *tmp_right_name_2;
        if (var_window == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 150;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_91 = var_window;
        tmp_subscript_name_12 = mod_consts[67];
        tmp_expression_name_90 = LOOKUP_SUBSCRIPT(tmp_expression_name_91, tmp_subscript_name_12);
        if (tmp_expression_name_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_41 = LOOKUP_ATTRIBUTE(tmp_expression_name_90, mod_consts[74]);
        Py_DECREF(tmp_expression_name_90);
        if (tmp_called_name_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_92 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_expression_name_92 == NULL)) {
            tmp_expression_name_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        if (tmp_expression_name_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_41);

            exception_lineno = 150;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_12 = LOOKUP_ATTRIBUTE(tmp_expression_name_92, mod_consts[71]);
        if (tmp_called_instance_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_41);

            exception_lineno = 150;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 150;
        tmp_left_name_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_12, mod_consts[72]);
        Py_DECREF(tmp_called_instance_12);
        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_41);

            exception_lineno = 150;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_start_time == NULL) {
            Py_DECREF(tmp_called_name_41);
            Py_DECREF(tmp_left_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[114]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 150;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_2 = var_start_time;
        tmp_unicode_arg_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_left_name_2);
        if (tmp_unicode_arg_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_41);

            exception_lineno = 150;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_13 = PyObject_Unicode(tmp_unicode_arg_6);
        Py_DECREF(tmp_unicode_arg_6);
        if (tmp_args_element_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_41);

            exception_lineno = 150;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 150;
        tmp_call_result_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_41, tmp_args_element_name_13);
        Py_DECREF(tmp_called_name_41);
        Py_DECREF(tmp_args_element_name_13);
        if (tmp_call_result_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_27);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 89;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_called_instance_13;
        PyObject *tmp_call_result_28;
        if (var_window == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 152;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_13 = var_window;
        frame_ad9f8e920ccb9599254317edd08ec111->m_frame.f_lineno = 152;
        tmp_call_result_28 = CALL_METHOD_NO_ARGS(tmp_called_instance_13, mod_consts[115]);
        if (tmp_call_result_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_28);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ad9f8e920ccb9599254317edd08ec111);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ad9f8e920ccb9599254317edd08ec111);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ad9f8e920ccb9599254317edd08ec111, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ad9f8e920ccb9599254317edd08ec111->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ad9f8e920ccb9599254317edd08ec111, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ad9f8e920ccb9599254317edd08ec111,
        type_description_1,
        var_toolbar_buttons,
        var_layout,
        var_window,
        var_start_time,
        var_age,
        var_event,
        var_values,
        var_err,
        var_ageinhours,
        var_w
    );


    // Release cached frame if used for exception.
    if (frame_ad9f8e920ccb9599254317edd08ec111 == cache_frame_ad9f8e920ccb9599254317edd08ec111) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ad9f8e920ccb9599254317edd08ec111);
        cache_frame_ad9f8e920ccb9599254317edd08ec111 = NULL;
    }

    assertFrameObject(frame_ad9f8e920ccb9599254317edd08ec111);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_toolbar_buttons);
    var_toolbar_buttons = NULL;
    Py_XDECREF(var_layout);
    var_layout = NULL;
    Py_XDECREF(var_window);
    var_window = NULL;
    Py_XDECREF(var_start_time);
    var_start_time = NULL;
    Py_XDECREF(var_age);
    var_age = NULL;
    CHECK_OBJECT(var_event);
    Py_DECREF(var_event);
    var_event = NULL;
    Py_XDECREF(var_values);
    var_values = NULL;
    Py_XDECREF(var_err);
    var_err = NULL;
    Py_XDECREF(var_ageinhours);
    var_ageinhours = NULL;
    Py_XDECREF(var_w);
    var_w = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_toolbar_buttons);
    var_toolbar_buttons = NULL;
    Py_XDECREF(var_layout);
    var_layout = NULL;
    Py_XDECREF(var_window);
    var_window = NULL;
    Py_XDECREF(var_start_time);
    var_start_time = NULL;
    Py_XDECREF(var_age);
    var_age = NULL;
    Py_XDECREF(var_event);
    var_event = NULL;
    Py_XDECREF(var_values);
    var_values = NULL;
    Py_XDECREF(var_err);
    var_err = NULL;
    Py_XDECREF(var_ageinhours);
    var_ageinhours = NULL;
    Py_XDECREF(var_w);
    var_w = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION___main__$$$function__1_showMeTheButtons() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__1_showMeTheButtons,
        mod_consts[131],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ad9f8e920ccb9599254317edd08ec111,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable___main__[] = {
    impl___main__$$$function__1_showMeTheButtons,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable___main__;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable___main__) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable___main__[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module___main__,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode___main__(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module___main__ = module;

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();

#if PYTHON_VERSION < 0x300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 0x270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    PRINT_STRING("__main__: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("__main__: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("__main__: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in init__main__\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict___main__ = MODULE_DICT(module___main__);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(module_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict___main__,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict___main__,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict___main__,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict___main__,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict___main__,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module___main__);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !1
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 1
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module___main__);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_b57e4d879b69ead890201a402ea75c42;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    // Frame without reuse.
    frame_b57e4d879b69ead890201a402ea75c42 = MAKE_MODULE_FRAME(codeobj_b57e4d879b69ead890201a402ea75c42, module___main__);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_b57e4d879b69ead890201a402ea75c42);
    assert(Py_REFCNT(frame_b57e4d879b69ead890201a402ea75c42) == 2);

    // Framed code:
    {
        PyObject *tmp_imported_value_1;
        frame_b57e4d879b69ead890201a402ea75c42->m_frame.f_lineno = 1;
        tmp_imported_value_1 = IMPORT_HARD_SITE();
        if (tmp_imported_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[117];
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_2);
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = PyDict_New();
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[121];
        tmp_globals_arg_name_1 = (PyObject *)moduledict___main__;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = mod_consts[73];
        frame_b57e4d879b69ead890201a402ea75c42->m_frame.f_lineno = 1;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_arg_name_2;
        PyObject *tmp_locals_arg_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = mod_consts[122];
        tmp_globals_arg_name_2 = (PyObject *)moduledict___main__;
        tmp_locals_arg_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = mod_consts[73];
        frame_b57e4d879b69ead890201a402ea75c42->m_frame.f_lineno = 2;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_arg_name_2, tmp_locals_arg_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_arg_name_3;
        PyObject *tmp_locals_arg_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = mod_consts[123];
        tmp_globals_arg_name_3 = (PyObject *)moduledict___main__;
        tmp_locals_arg_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = mod_consts[73];
        frame_b57e4d879b69ead890201a402ea75c42->m_frame.f_lineno = 3;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_arg_name_3, tmp_locals_arg_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_arg_name_4;
        PyObject *tmp_locals_arg_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = mod_consts[71];
        tmp_globals_arg_name_4 = (PyObject *)moduledict___main__;
        tmp_locals_arg_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        tmp_level_name_4 = mod_consts[73];
        frame_b57e4d879b69ead890201a402ea75c42->m_frame.f_lineno = 4;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_arg_name_4, tmp_locals_arg_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = mod_consts[124];
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = mod_consts[125];
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[126];
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[127];
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[128];
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_13);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        frame_b57e4d879b69ead890201a402ea75c42->m_frame.f_lineno = 21;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_1,
            mod_consts[129],
            &PyTuple_GET_ITEM(mod_consts[130], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_14;


        tmp_assign_source_14 = MAKE_FUNCTION___main__$$$function__1_showMeTheButtons();

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_14);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        frame_b57e4d879b69ead890201a402ea75c42->m_frame.f_lineno = 156;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_2,
            mod_consts[93],
            &PyTuple_GET_ITEM(mod_consts[132], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_3;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[131]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[131]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        frame_b57e4d879b69ead890201a402ea75c42->m_frame.f_lineno = 157;
        tmp_call_result_3 = CALL_FUNCTION_NO_ARGS(tmp_called_name_1);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b57e4d879b69ead890201a402ea75c42);
#endif
    popFrameStack();

    assertFrameObject(frame_b57e4d879b69ead890201a402ea75c42);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b57e4d879b69ead890201a402ea75c42);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b57e4d879b69ead890201a402ea75c42, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b57e4d879b69ead890201a402ea75c42->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b57e4d879b69ead890201a402ea75c42, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    return module___main__;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

