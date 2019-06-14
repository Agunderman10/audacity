/**********************************************************************

Audacity: A Digital Audio Editor

CommonCommandFlags.cpp

Paul Licameli split from Menus.cpp

**********************************************************************/

#ifndef __AUDACITY_COMMON_COMMAND_FLAGS__
#define __AUDACITY_COMMON_COMMAND_FLAGS__

#include "commands/CommandFlag.h"

bool TracksSelectedPred( const AudacityProject &project );
bool AudioIOBusyPred( const AudacityProject &project );
bool TimeSelectedPred( const AudacityProject &project );
extern const CommandFlagOptions cutCopyOptions;

extern const ReservedCommandFlag
   AudioIONotBusyFlag,
   StereoRequiredFlag,  //lda
   TimeSelectedFlag, // This is equivalent to check if there is a valid selection, so it's used for Zoom to Selection too
   WaveTracksSelectedFlag,
   TracksExistFlag,
   TracksSelectedFlag,
   TrackPanelHasFocus;  //lll

extern const ReservedCommandFlag
   AudioIOBusyFlag, // lll
   CaptureNotBusyFlag,
   HasWaveDataFlag; // jkc

extern const ReservedCommandFlag
   LabelTracksExistFlag,
   UnsavedChangesFlag,
   HasLastEffectFlag,
   UndoAvailableFlag,
   RedoAvailableFlag,
   ZoomInAvailableFlag,
   ZoomOutAvailableFlag,
   LabelsSelectedFlag,
   PlayRegionLockedFlag,  //msmeyer
   PlayRegionNotLockedFlag,  //msmeyer
   WaveTracksExistFlag,
   NoteTracksExistFlag,  //gsw
   NoteTracksSelectedFlag,  //gsw
   IsNotSyncLockedFlag,  //awd
   IsSyncLockedFlag,  //awd
   NotMinimizedFlag, // prl
   PausedFlag, // jkc
   PlayableTracksExistFlag,
   AudioTracksSelectedFlag,
   NoAutoSelect // jkc
;

#endif
