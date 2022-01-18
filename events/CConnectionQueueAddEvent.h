#pragma once

#include "../types/StringView.h"
#include "../types/String.h"
#include "../Ref.h"
#include "../types/ConnectionInfo.h"

#include "CEvent.h"

namespace alt
{
	class IPlayer;

	class CConnectionQueueAddEvent : public CEvent
	{
	public:
		CConnectionQueueAddEvent(ConnectionInfo* _connectionInfo) :
			CEvent(Type::CONNECTION_QUEUE_ADD),
			connectionInfo(_connectionInfo)
		{
		}

		ConnectionInfo* GetConnectionInfo() const { return connectionInfo; }

	private:
		ConnectionInfo* connectionInfo;
	};
}
