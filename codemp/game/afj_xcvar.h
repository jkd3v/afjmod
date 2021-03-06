#ifdef XCVAR_PROTO
	#define XCVAR_DEF( name, defVal, update, flags, announce ) extern vmCvar_t name;
#endif

#ifdef XCVAR_DECL
	#define XCVAR_DEF( name, defVal, update, flags, announce ) vmCvar_t name;
#endif

#ifdef XCVAR_LIST
	#define XCVAR_DEF( name, defVal, update, flags, announce ) { & name , #name , defVal , update , flags , announce },
#endif

XCVAR_DEF( afj_allowDropSaber,				"Allow a player to drop his saber or not",			NULL,				CVAR_ARCHIVE | CVAR_NORESTART,					qtrue)
XCVAR_DEF( afj_clanLogInMsg,				"is now logged as a member of the clan",			NULL,				CVAR_ARCHIVE | CVAR_NORESTART,					qtrue)
XCVAR_DEF( afj_clanLogOutMsg,				"logged out of the clan",							NULL,				CVAR_ARCHIVE | CVAR_NORESTART,					qtrue)
XCVAR_DEF( afj_clanPassword,				"",													NULL,				CVAR_ARCHIVE | CVAR_NORESTART,					qfalse)
XCVAR_DEF( afj_hookSpeed,					"5000",												NULL,				CVAR_ARCHIVE | CVAR_NORESTART,					qtrue)
XCVAR_DEF( afj_ignoreMsg,					"Ignored you",										NULL,				CVAR_ARCHIVE | CVAR_NORESTART,					qtrue)
XCVAR_DEF( afj_kickMsg,						"You've been kicked from the server",				NULL,				CVAR_ARCHIVE | CVAR_NORESTART,					qtrue)
XCVAR_DEF( afj_killMsg,						"You've been killed",								NULL,				CVAR_ARCHIVE | CVAR_NORESTART,					qtrue)
//XCVAR_DEF( afj_killProtectMsg,			"The Death himself can't kill him",					NULL,				CVAR_ARCHIVE | CVAR_NORESTART,					qtrue)
XCVAR_DEF( afj_protectMsg,					"You've been protected",							NULL,				CVAR_ARCHIVE | CVAR_NORESTART,					qtrue)
XCVAR_DEF( afj_renameMsg,					"Got renamed",										NULL,				CVAR_ARCHIVE | CVAR_NORESTART,					qtrue)
XCVAR_DEF( afj_SilenceMsg,					"Has been silenced",								NULL,				CVAR_ARCHIVE | CVAR_NORESTART,					qtrue)
XCVAR_DEF( afj_unIgnoreMsg,					"Not ignoring you anymore",							NULL,				CVAR_ARCHIVE | CVAR_NORESTART,					qtrue)
XCVAR_DEF( afj_unProtectMsg,				"You've been unprotected",							NULL,				CVAR_ARCHIVE | CVAR_NORESTART,					qtrue)
XCVAR_DEF( afj_UnSilenceMsg,				"Has been unsilenced",								NULL,				CVAR_ARCHIVE | CVAR_NORESTART,					qtrue)
XCVAR_DEF( afj_waitBeforeNextTry,			"Wait before the next try",							NULL,				CVAR_ARCHIVE | CVAR_NORESTART,					qtrue)

#undef XCVAR_DEF
