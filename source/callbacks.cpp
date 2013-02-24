//
//  callbacks.cpp
//  stockfish
//
//  Created by Vaugham Hong on 2013-02-15.
//  Copyright (c) 2013 cookiemob. All rights reserved.
//

#include "callbacks.h"

namespace Callbacks{
    /// Callbacks the GUI can overried
    onStartThinkingCallback onStartThinking = NULL;
    onMoveFoundCallback onMoveFound = NULL;
}
