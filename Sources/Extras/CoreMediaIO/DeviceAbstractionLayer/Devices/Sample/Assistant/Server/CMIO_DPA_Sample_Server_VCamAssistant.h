/*
	    File: CMIO_DPA_QuickomCamera_Server_VCamAssistant.h
	Abstract: Server which handles all the IPC between the various Sample DAL PlugIn instances.
	 Version: 1.2
	
*/

#if !defined(__CMIO_DPA_Sample_Server_VCamAssistant_h__)
#define __CMIO_DPA_Sample_Server_VCamAssistant_h__

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//	Includes
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include "CMIO_DPA_Sample_Server_Assistant.h"

namespace CMIO { namespace DPA { namespace Sample { namespace Server
{
    class VCamAssistant: public Assistant
	{
	// Construction/Destruction
	public:
		static VCamAssistant*			Instance(int type);

	public:
									VCamAssistant(int type);
        static VCamAssistant*           sInstance;
        
    private:
        void                            CreateDevices(int type);
	};
}}}}
#endif
