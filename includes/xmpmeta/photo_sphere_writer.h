// Copyright 2016 The XMPMeta Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef XMPMETA_PHOTO_SPHERE_WRITER_H_
#define XMPMETA_PHOTO_SPHERE_WRITER_H_

#include <iostream>
#include <memory>

#include "xmpmeta/gpano.h"
#include "xmpmeta/xmp_data.h"

namespace xmpmeta {

// Writes the Photo Sphere XMP format.
bool WritePhotoSphereMetaToXmp(const GPano& gpano, XmpData* xmp_data);

}  // namespace xmpmeta

#endif  // XMPMETA_PHOTO_SPHERE_WRITER_H_
