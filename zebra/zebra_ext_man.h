#ifndef ZEBRA_EXT_MAN_H_
#define ZEBRA_EXT_MAN_H_

#include "zserv.h"
#include "zebra_pw.h"

struct external_manager_t
{
		int (*send_pw) (struct zebra_pw_t *pw);
};

#endif /* ZEBRA_EXT_MAN_H_ */
