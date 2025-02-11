/* -*- Mode: C++; tab-width: 8; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* vim: set ts=8 sts=2 et sw=2 tw=80: */
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef nsSearchControlFrame_h__
#define nsSearchControlFrame_h__

#include "nsTextControlFrame.h"

class nsITextControlFrame;
class nsPresContext;

namespace mozilla {
class PresShell;
namespace dom {
class Element;
}  // namespace dom
}  // namespace mozilla

/** This frame type is used for <input type=search>. */
class nsSearchControlFrame final : public nsTextControlFrame {
  friend nsIFrame* NS_NewSearchControlFrame(mozilla::PresShell*,
                                            ComputedStyle*);
  nsSearchControlFrame(ComputedStyle*, nsPresContext*);

 public:
  NS_DECL_QUERYFRAME
  NS_DECL_FRAMEARENA_HELPERS(nsSearchControlFrame)

  nsresult CreateAnonymousContent(nsTArray<ContentInfo>& aElements) override;

#ifdef DEBUG_FRAME_DUMP
  nsresult GetFrameName(nsAString& aResult) const override {
    return MakeFrameName(u"SearchControl"_ns, aResult);
  }
#endif
};

#endif  // nsSearchControlFrame_h__