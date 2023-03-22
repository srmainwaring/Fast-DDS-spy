// Copyright 2023 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include <ostream>

#include <fastddsspy_participants/model/DataStreamer.hpp>

namespace eprosima {
namespace spy {

class View
{
public:

    void show(
            const std::string& value);

    void show(
            const char* value);

    template <typename T>
    void show(
            const T& value);

    template <typename T>
    void show_error(
            const T& value);
};

} /* namespace spy */
} /* namespace eprosima */
