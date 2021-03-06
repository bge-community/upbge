/*
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * The Original Code is Copyright (C) 2001-2002 by NaN Holding BV.
 * All rights reserved.
 */

/** \file KX_MotionState.h
 *  \ingroup ketsji
 */

#ifndef __KX_MOTIONSTATE_H__
#define __KX_MOTIONSTATE_H__

#include "PHY_IMotionState.h"

class SG_Node;

class KX_MotionState : public PHY_IMotionState
{
	SG_Node *m_node;

public:
	KX_MotionState(SG_Node *spatial);
	virtual ~KX_MotionState();

	virtual mt::vec3 GetWorldPosition() const;
	virtual mt::vec3 GetWorldScaling() const;
	virtual mt::mat3 GetWorldOrientation() const;

	virtual void SetWorldPosition(const mt::vec3& pos);
	virtual void SetWorldOrientation(const mt::mat3& ori);
	virtual void SetWorldOrientation(const mt::quat& quat);

	virtual void CalculateWorldTransformations();
};

#endif  // __KX_MOTIONSTATE_H__
