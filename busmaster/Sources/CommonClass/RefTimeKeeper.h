/*
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * \file      RefTimeKeeper.h
 * \brief     Definition of CRefTimeKeeper class
 * \author    Anish kumar
 * \copyright Copyright (c) 2011, Robert Bosch Engineering and Business Solutions. All rights reserved.
 *
 * Definition of CRefTimeKeeper class
 */

#pragma once

class CRefTimeKeeper
{
public:
    CRefTimeKeeper();
    void vSetTimeParams(SYSTEMTIME& currentSystemTime, UINT64 connectTime);
    void vGetTimeParams(UINT64& referenceSystemTime_, UINT64& absoluteBaseTime_);
protected:
    UINT64 m_qwRefSysTime;
    UINT64 m_qwAbsBaseTime;

    //static void vGetTimeParams(UINT64& qwRefSysTime, UINT64& qwAbsBaseTime);
};