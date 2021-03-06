/*
 * Copyright (c) 2015 ARM Limited. All rights reserved.
 * SPDX-License-Identifier: Apache-2.0
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef TEST_M2M_DEVICE_H
#define TEST_M2M_DEVICE_H


#include <m2mdevice.h>

class Callback;

class Test_M2MDevice
{
public:
    Test_M2MDevice();
    virtual ~Test_M2MDevice();

    void test_create_resource_instance();

    void test_create_resource_string();

    void test_create_resource_int();

    void test_create_resource_no_param();

    void test_delete_resource();

    void test_delete_resource_instance();

    void test_set_resource_value_int();

    void test_set_resource_value_string();

    void test_resource_value_int();

    void test_resource_value_string();

    void test_is_resource_present();

    void test_per_resource_count();

    void test_total_resource_count();

    M2MDevice* device;
    Callback *callback;
};

#endif // TEST_M2M_DEVICE_H
