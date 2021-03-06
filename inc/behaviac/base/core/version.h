/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Tencent is pleased to support the open source community by making behaviac available.
//
// Copyright (C) 2015 THL A29 Limited, a Tencent company. All rights reserved.
//
// Licensed under the BSD 3-Clause License (the "License"); you may not use this file except in compliance with
// the License. You may obtain a copy of the License at http://opensource.org/licenses/BSD-3-Clause
//
// Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and limitations under the License.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef BEHAVIAC_BASE_CORE_VERSION_H_
#define BEHAVIAC_BASE_CORE_VERSION_H_

#include "behaviac/base/core/config.h"

/// lib version
/**
lib version

note: this version is not necessarily the same with the designer's version.
*/
#define __BEHAVIAC_VERSION_STRING__		"2.0.3"

/// differentiate the Debug/Release
#if !defined(BEHAVIAC_RELEASE)
	#define BEHAVIAC_VERSION_STRING			__BEHAVIAC_VERSION_STRING__"_d"
#else
	#define BEHAVIAC_VERSION_STRING			__BEHAVIAC_VERSION_STRING__
#endif//BEHAVIAC_RELEASE

#endif//BEHAVIAC_BASE_CORE_VERSION_H_