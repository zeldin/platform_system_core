/*
 * Copyright (C) 2010 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _INIT_INIT_PARSER_H_
#define _INIT_INIT_PARSER_H_

#include <string>
#include <vector>

#define INIT_PARSER_MAXARGS 64

class Action;

bool init_parse_config(const char* path);
int expand_props(const std::string& src, std::string* dst);
bool add_command_to_action(Action* action, const std::vector<std::string>& args,
                           const std::string& filename, int line, std::string* err);

#endif
