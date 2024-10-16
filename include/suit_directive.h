/*
 * Copyright (c) 2021 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef SUIT_DIRECTIVE_H__
#define SUIT_DIRECTIVE_H__

#include "suit_types.h"
#include <stdint.h>


/** Set the current component indices. This decides which component(s)
 *  are affected by subsequent commands. */
int suit_directive_set_current_components(struct suit_processor_state *state,
		struct IndexArg_ *index_arg);


/** suit-directive-try-each */
int suit_directive_try_each(struct suit_processor_state *state,
		struct SUIT_Directive_Try_Each_Argument *try_each_arg);

/** suit-directive-run-sequence */
int suit_directive_run_sequence(struct suit_processor_state *state,
		struct zcbor_string *command_sequence);

/** Copy the parameters in @p new_parameters (that are set) into the parameter
 *  list of the current component(s). */
int suit_directive_override_parameters(struct suit_processor_state *state,
		struct suit_manifest_params *new_parameters);

/** Fetch a payload based on the configured parameters. */
int suit_directive_fetch(struct suit_processor_state *state);

/** Copy a payload based on the configured parameters. */
int suit_directive_copy(struct suit_processor_state *state);

/** Swap a payload based on the configured parameters. */
int suit_directive_swap(struct suit_processor_state *state);

/** Run/boot a component based on the configured parameters. */
int suit_directive_run(struct suit_processor_state *state);


#endif /* SUIT_DIRECTIVE_H__ */
