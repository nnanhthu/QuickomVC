#ifndef	_SampleAssistant_server_
#define	_SampleAssistant_server_

/* Module SampleAssistant */

#include <string.h>
#include <mach/ndr.h>
#include <mach/boolean.h>
#include <mach/kern_return.h>
#include <mach/notify.h>
#include <mach/mach_types.h>
#include <mach/message.h>
#include <mach/mig_errors.h>
#include <mach/port.h>
	
/* BEGIN VOUCHER CODE */

#ifndef KERNEL
#if defined(__has_include)
#if __has_include(<mach/mig_voucher_support.h>)
#ifndef USING_VOUCHERS
#define USING_VOUCHERS
#endif
#ifndef __VOUCHER_FORWARD_TYPE_DECLS__
#define __VOUCHER_FORWARD_TYPE_DECLS__
#ifdef __cplusplus
extern "C" {
#endif
	extern boolean_t voucher_mach_msg_set(mach_msg_header_t *msg) __attribute__((weak_import));
#ifdef __cplusplus
}
#endif
#endif // __VOUCHER_FORWARD_TYPE_DECLS__
#endif // __has_include(<mach/mach_voucher_types.h>)
#endif // __has_include
#endif // !KERNEL
	
/* END VOUCHER CODE */

	
/* BEGIN MIG_STRNCPY_ZEROFILL CODE */

#if defined(__has_include)
#if __has_include(<mach/mig_strncpy_zerofill_support.h>)
#ifndef USING_MIG_STRNCPY_ZEROFILL
#define USING_MIG_STRNCPY_ZEROFILL
#endif
#ifndef __MIG_STRNCPY_ZEROFILL_FORWARD_TYPE_DECLS__
#define __MIG_STRNCPY_ZEROFILL_FORWARD_TYPE_DECLS__
#ifdef __cplusplus
extern "C" {
#endif
	extern int mig_strncpy_zerofill(char *dest, const char *src, int len) __attribute__((weak_import));
#ifdef __cplusplus
}
#endif
#endif /* __MIG_STRNCPY_ZEROFILL_FORWARD_TYPE_DECLS__ */
#endif /* __has_include(<mach/mig_strncpy_zerofill_support.h>) */
#endif /* __has_include */
	
/* END MIG_STRNCPY_ZEROFILL CODE */


#ifdef AUTOTEST
#ifndef FUNCTION_PTR_T
#define FUNCTION_PTR_T
typedef void (*function_ptr_t)(mach_port_t, char *, mach_msg_type_number_t);
typedef struct {
        char            *name;
        function_ptr_t  function;
} function_table_entry;
typedef function_table_entry   *function_table_t;
#endif /* FUNCTION_PTR_T */
#endif /* AUTOTEST */

#ifndef	SampleAssistant_MSG_COUNT
#define	SampleAssistant_MSG_COUNT	18
#endif	/* SampleAssistant_MSG_COUNT */

#include <mach/std_types.h>
#include <mach/mig.h>
#include <mach/mig.h>
#include <mach/mach_types.h>
#include "CMIO_DPA_Sample_Shared.h"

#ifdef __BeforeMigServerHeader
__BeforeMigServerHeader
#endif /* __BeforeMigServerHeader */

#ifndef MIG_SERVER_ROUTINE
#define MIG_SERVER_ROUTINE
#endif


/* Routine SampleConnect */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t CMIODPASampleConnect
(
	mach_port_t servicePort,
	pid_t client,
	mach_port_t *clientSendPort
);

/* Routine SampleDisconnect */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t CMIODPASampleDisconnect
(
	mach_port_t clientSendPort
);

/* Routine SampleGetDeviceStates */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t CMIODPASampleGetDeviceStates
(
	mach_port_t clientSendPort,
	mach_port_t messagePort,
	CMIO_SCOPE_DPA_SCOPE_Sample_SCOPE_DeviceStatePtr *states,
	mach_msg_type_number_t *statesCnt
);

/* Routine SampleGetProperties */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t CMIODPASampleGetProperties
(
	mach_port_t clientSendPort,
	uint64_t guid,
	mach_port_t messagePort,
	uint64_t time,
	CMIOObjectPropertyAddress matchAddress,
	CMIO_SCOPE_PropertyAddressPtr *addresses,
	mach_msg_type_number_t *addressesCnt
);

/* Routine SampleSetPropertyState */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t CMIODPASampleSetPropertyState
(
	mach_port_t clientSendPort,
	uint64_t guid,
	UInt32 sendChangedNotifications,
	CMIOObjectPropertyAddress address,
	BytePtr qualifier,
	mach_msg_type_number_t qualifierCnt,
	BytePtr data,
	mach_msg_type_number_t dataCnt
);

/* Routine SampleGetPropertyState */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t CMIODPASampleGetPropertyState
(
	mach_port_t clientSendPort,
	uint64_t guid,
	CMIOObjectPropertyAddress address,
	BytePtr qualifier,
	mach_msg_type_number_t qualifierCnt,
	BytePtr *data,
	mach_msg_type_number_t *dataCnt
);

/* Routine SampleGetControls */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t CMIODPASampleGetControls
(
	mach_port_t clientSendPort,
	uint64_t guid,
	mach_port_t messagePort,
	uint64_t time,
	CMIO_SCOPE_DPA_SCOPE_Sample_SCOPE_ControlChangesPtr *controlChanges,
	mach_msg_type_number_t *controlChangesCnt
);

/* Routine SampleSetControl */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t CMIODPASampleSetControl
(
	mach_port_t clientSendPort,
	uint64_t guid,
	UInt32 controlID,
	UInt32 value,
	UInt32 *newValue
);

/* Routine SampleProcessRS422Command */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t CMIODPASampleProcessRS422Command
(
	mach_port_t clientSendPort,
	uint64_t guid,
	CMIO_SCOPE_DPA_SCOPE_Sample_SCOPE_ByteArray512 command,
	mach_msg_type_number_t commandCnt,
	UInt32 responseLength,
	UInt32 *responseUsed,
	BytePtr *response,
	mach_msg_type_number_t *responseCnt
);

/* Routine SampleStartStream */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t CMIODPASampleStartStream
(
	mach_port_t clientSendPort,
	uint64_t guid,
	mach_port_t messagePort,
	CMIOObjectPropertyScope scope,
	CMIOObjectPropertyElement element
);

/* Routine SampleStopStream */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t CMIODPASampleStopStream
(
	mach_port_t clientSendPort,
	uint64_t guid,
	CMIOObjectPropertyScope scope,
	CMIOObjectPropertyElement element
);

/* Routine SampleGetControlList */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t CMIODPASampleGetControlList
(
	mach_port_t clientSendPort,
	uint64_t guid,
	BytePtr *data,
	mach_msg_type_number_t *dataCnt
);

/* Routine SampleStartDeckThreads */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t CMIODPASampleStartDeckThreads
(
	mach_port_t clientSendPort,
	uint64_t guid,
	CMIOObjectPropertyScope scope,
	CMIOObjectPropertyElement element
);

/* Routine SampleStopDeckThreads */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t CMIODPASampleStopDeckThreads
(
	mach_port_t clientSendPort,
	uint64_t guid,
	CMIOObjectPropertyScope scope,
	CMIOObjectPropertyElement element
);

/* Routine SampleDeckPlay */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t CMIODPASampleDeckPlay
(
	mach_port_t clientSendPort,
	uint64_t guid,
	CMIOObjectPropertyScope scope,
	CMIOObjectPropertyElement element
);

/* Routine SampleDeckStop */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t CMIODPASampleDeckStop
(
	mach_port_t clientSendPort,
	uint64_t guid,
	CMIOObjectPropertyScope scope,
	CMIOObjectPropertyElement element
);

/* Routine SampleDeckJog */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t CMIODPASampleDeckJog
(
	mach_port_t clientSendPort,
	uint64_t guid,
	CMIOObjectPropertyScope scope,
	CMIOObjectPropertyElement element,
	SInt32 speed
);

/* Routine SampleDeckCueTo */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
MIG_SERVER_ROUTINE
kern_return_t CMIODPASampleDeckCueTo
(
	mach_port_t clientSendPort,
	uint64_t guid,
	CMIOObjectPropertyScope scope,
	CMIOObjectPropertyElement element,
	Float64 requestedTimecode,
	UInt32 playOnCue
);

#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
boolean_t CMIODPASampleServer(
		mach_msg_header_t *InHeadP,
		mach_msg_header_t *OutHeadP);

#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
mig_routine_t CMIODPASampleServer_routine(
		mach_msg_header_t *InHeadP);


/* Description of this subsystem, for use in direct RPC */
extern const struct CMIODPASampleAssistant_subsystem {
	mig_server_routine_t	server;	/* Server routine */
	mach_msg_id_t	start;	/* Min routine number */
	mach_msg_id_t	end;	/* Max routine number + 1 */
	unsigned int	maxsize;	/* Max msg size */
	vm_address_t	reserved;	/* Reserved */
	struct routine_descriptor	/*Array of routine descriptors */
		routine[18];
} CMIODPASampleAssistant_subsystem;

/* typedefs for all requests */

#ifndef __Request__SampleAssistant_subsystem__defined
#define __Request__SampleAssistant_subsystem__defined

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		pid_t client;
	} __Request__SampleConnect_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__SampleDisconnect_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t messagePort;
		/* end of the kernel processed data */
	} __Request__SampleGetDeviceStates_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t messagePort;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		uint64_t guid;
		uint64_t time;
		CMIOObjectPropertyAddress matchAddress;
	} __Request__SampleGetProperties_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t qualifier;
		mach_msg_ool_descriptor_t data;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		uint64_t guid;
		UInt32 sendChangedNotifications;
		CMIOObjectPropertyAddress address;
		mach_msg_type_number_t qualifierCnt;
		mach_msg_type_number_t dataCnt;
	} __Request__SampleSetPropertyState_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t qualifier;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		uint64_t guid;
		CMIOObjectPropertyAddress address;
		mach_msg_type_number_t qualifierCnt;
	} __Request__SampleGetPropertyState_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t messagePort;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		uint64_t guid;
		uint64_t time;
	} __Request__SampleGetControls_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		uint64_t guid;
		UInt32 controlID;
		UInt32 value;
	} __Request__SampleSetControl_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		uint64_t guid;
		mach_msg_type_number_t commandCnt;
		UInt8 command[512];
		UInt32 responseLength;
	} __Request__SampleProcessRS422Command_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t messagePort;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		uint64_t guid;
		CMIOObjectPropertyScope scope;
		CMIOObjectPropertyElement element;
	} __Request__SampleStartStream_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		uint64_t guid;
		CMIOObjectPropertyScope scope;
		CMIOObjectPropertyElement element;
	} __Request__SampleStopStream_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		uint64_t guid;
	} __Request__SampleGetControlList_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		uint64_t guid;
		CMIOObjectPropertyScope scope;
		CMIOObjectPropertyElement element;
	} __Request__SampleStartDeckThreads_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		uint64_t guid;
		CMIOObjectPropertyScope scope;
		CMIOObjectPropertyElement element;
	} __Request__SampleStopDeckThreads_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		uint64_t guid;
		CMIOObjectPropertyScope scope;
		CMIOObjectPropertyElement element;
	} __Request__SampleDeckPlay_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		uint64_t guid;
		CMIOObjectPropertyScope scope;
		CMIOObjectPropertyElement element;
	} __Request__SampleDeckStop_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		uint64_t guid;
		CMIOObjectPropertyScope scope;
		CMIOObjectPropertyElement element;
		SInt32 speed;
	} __Request__SampleDeckJog_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		uint64_t guid;
		CMIOObjectPropertyScope scope;
		CMIOObjectPropertyElement element;
		Float64 requestedTimecode;
		UInt32 playOnCue;
	} __Request__SampleDeckCueTo_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
#endif /* !__Request__SampleAssistant_subsystem__defined */


/* union of all requests */

#ifndef __RequestUnion__CMIODPASampleAssistant_subsystem__defined
#define __RequestUnion__CMIODPASampleAssistant_subsystem__defined
union __RequestUnion__CMIODPASampleAssistant_subsystem {
	__Request__SampleConnect_t Request_SampleConnect;
	__Request__SampleDisconnect_t Request_SampleDisconnect;
	__Request__SampleGetDeviceStates_t Request_SampleGetDeviceStates;
	__Request__SampleGetProperties_t Request_SampleGetProperties;
	__Request__SampleSetPropertyState_t Request_SampleSetPropertyState;
	__Request__SampleGetPropertyState_t Request_SampleGetPropertyState;
	__Request__SampleGetControls_t Request_SampleGetControls;
	__Request__SampleSetControl_t Request_SampleSetControl;
	__Request__SampleProcessRS422Command_t Request_SampleProcessRS422Command;
	__Request__SampleStartStream_t Request_SampleStartStream;
	__Request__SampleStopStream_t Request_SampleStopStream;
	__Request__SampleGetControlList_t Request_SampleGetControlList;
	__Request__SampleStartDeckThreads_t Request_SampleStartDeckThreads;
	__Request__SampleStopDeckThreads_t Request_SampleStopDeckThreads;
	__Request__SampleDeckPlay_t Request_SampleDeckPlay;
	__Request__SampleDeckStop_t Request_SampleDeckStop;
	__Request__SampleDeckJog_t Request_SampleDeckJog;
	__Request__SampleDeckCueTo_t Request_SampleDeckCueTo;
};
#endif /* __RequestUnion__CMIODPASampleAssistant_subsystem__defined */
/* typedefs for all replies */

#ifndef __Reply__SampleAssistant_subsystem__defined
#define __Reply__SampleAssistant_subsystem__defined

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t clientSendPort;
		/* end of the kernel processed data */
	} __Reply__SampleConnect_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__SampleDisconnect_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t states;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t statesCnt;
	} __Reply__SampleGetDeviceStates_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t addresses;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t addressesCnt;
	} __Reply__SampleGetProperties_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__SampleSetPropertyState_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t data;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t dataCnt;
	} __Reply__SampleGetPropertyState_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t controlChanges;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t controlChangesCnt;
	} __Reply__SampleGetControls_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		UInt32 newValue;
	} __Reply__SampleSetControl_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t response;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		UInt32 responseUsed;
		mach_msg_type_number_t responseCnt;
	} __Reply__SampleProcessRS422Command_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__SampleStartStream_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__SampleStopStream_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t data;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t dataCnt;
	} __Reply__SampleGetControlList_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__SampleStartDeckThreads_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__SampleStopDeckThreads_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__SampleDeckPlay_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__SampleDeckStop_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__SampleDeckJog_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__SampleDeckCueTo_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
#endif /* !__Reply__SampleAssistant_subsystem__defined */


/* union of all replies */

#ifndef __ReplyUnion__CMIODPASampleAssistant_subsystem__defined
#define __ReplyUnion__CMIODPASampleAssistant_subsystem__defined
union __ReplyUnion__CMIODPASampleAssistant_subsystem {
	__Reply__SampleConnect_t Reply_SampleConnect;
	__Reply__SampleDisconnect_t Reply_SampleDisconnect;
	__Reply__SampleGetDeviceStates_t Reply_SampleGetDeviceStates;
	__Reply__SampleGetProperties_t Reply_SampleGetProperties;
	__Reply__SampleSetPropertyState_t Reply_SampleSetPropertyState;
	__Reply__SampleGetPropertyState_t Reply_SampleGetPropertyState;
	__Reply__SampleGetControls_t Reply_SampleGetControls;
	__Reply__SampleSetControl_t Reply_SampleSetControl;
	__Reply__SampleProcessRS422Command_t Reply_SampleProcessRS422Command;
	__Reply__SampleStartStream_t Reply_SampleStartStream;
	__Reply__SampleStopStream_t Reply_SampleStopStream;
	__Reply__SampleGetControlList_t Reply_SampleGetControlList;
	__Reply__SampleStartDeckThreads_t Reply_SampleStartDeckThreads;
	__Reply__SampleStopDeckThreads_t Reply_SampleStopDeckThreads;
	__Reply__SampleDeckPlay_t Reply_SampleDeckPlay;
	__Reply__SampleDeckStop_t Reply_SampleDeckStop;
	__Reply__SampleDeckJog_t Reply_SampleDeckJog;
	__Reply__SampleDeckCueTo_t Reply_SampleDeckCueTo;
};
#endif /* __ReplyUnion__CMIODPASampleAssistant_subsystem__defined */

#ifndef subsystem_to_name_map_SampleAssistant
#define subsystem_to_name_map_SampleAssistant \
    { "SampleConnect", 1984 },\
    { "SampleDisconnect", 1985 },\
    { "SampleGetDeviceStates", 1986 },\
    { "SampleGetProperties", 1987 },\
    { "SampleSetPropertyState", 1988 },\
    { "SampleGetPropertyState", 1989 },\
    { "SampleGetControls", 1990 },\
    { "SampleSetControl", 1991 },\
    { "SampleProcessRS422Command", 1992 },\
    { "SampleStartStream", 1993 },\
    { "SampleStopStream", 1994 },\
    { "SampleGetControlList", 1995 },\
    { "SampleStartDeckThreads", 1996 },\
    { "SampleStopDeckThreads", 1997 },\
    { "SampleDeckPlay", 1998 },\
    { "SampleDeckStop", 1999 },\
    { "SampleDeckJog", 2000 },\
    { "SampleDeckCueTo", 2001 }
#endif

#ifdef __AfterMigServerHeader
__AfterMigServerHeader
#endif /* __AfterMigServerHeader */

#endif	 /* _SampleAssistant_server_ */
