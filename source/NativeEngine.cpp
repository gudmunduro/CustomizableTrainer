#include "pch.h"

#include "NativeEngine.h"

void Native::invoke(Handler fn, Context& ctx)
{
	if (!fn)
		return;

	__try {
		fn(&ctx);
	}
	__except (EXCEPTION_EXECUTE_HANDLER) {
	}
	__try {
		ctx.CopyResults();
	}
	__except (EXCEPTION_EXECUTE_HANDLER) {
	}
}