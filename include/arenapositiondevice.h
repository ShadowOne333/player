/*
 *  Player - One Hell of a Robot Server
 *  Copyright (C) 2000  Brian Gerkey   &  Kasper Stoy
 *                      gerkey@usc.edu    kaspers@robotics.usc.edu
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

#ifndef ARENAPOSITIONDEVICE
#define ARENAPOSITIONDEVICE

#include "arenalock.h"
#include "positiondevice.h"

class CArenaPositionDevice: public CPositionDevice {
 private:
  CArenaLock alock;
  
 public:
  CArenaPositionDevice(char* port);
  ~CArenaPositionDevice();
  
  virtual CLock* GetLock( void ){ return &alock; };
 
  virtual int GetData( unsigned char * );
  virtual int Setup();
  virtual int Shutdown();
};

#endif


