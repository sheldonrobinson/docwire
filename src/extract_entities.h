/*********************************************************************************************************************************************/
/*  DocWire SDK: Award-winning modern data processing in C++20. SourceForge Community Choice & Microsoft support. AI-driven processing.      */
/*  Supports nearly 100 data formats, including email boxes and OCR. Boost efficiency in text extraction, web data extraction, data mining,  */
/*  document analysis. Offline processing possible for security and confidentiality                                                          */
/*                                                                                                                                           */
/*  Copyright (c) SILVERCODERS Ltd, http://silvercoders.com                                                                                  */
/*  Project homepage: https://github.com/docwire/docwire                                                                                     */
/*                                                                                                                                           */
/*  SPDX-License-Identifier: GPL-2.0-only OR LicenseRef-DocWire-Commercial                                                                   */
/*********************************************************************************************************************************************/

#ifndef DOCWIRE_OPENAI_EXTRACT_ENTITIES_H
#define DOCWIRE_OPENAI_EXTRACT_ENTITIES_H

#include "chat.h"

namespace docwire
{
namespace openai
{

class DOCWIRE_OPENAI_EXPORT ExtractEntities : public Chat
{
public:
	ExtractEntities(const std::string& api_key, Model model = Model::gpt_4o, float temperature = 0, ImageDetail image_detail = ImageDetail::automatic);
};

} // namespace openai
} // namespace docwire

#endif //DOCWIRE_OPENAI_EXTRACT_ENTITIES_H
