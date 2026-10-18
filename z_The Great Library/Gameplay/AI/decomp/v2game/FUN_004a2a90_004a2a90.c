// FUN_004a2a90 @ 004a2a90 body=[[004a2a90, 004a2add] [004a2ae1, 004a2af6]]


/* WARNING: Removing unreachable block (ram,0x004a2a9b) */

void FUN_004a2a90(uint param_1)

{
  int iVar1;
  void *_Dst;
  int *unaff_ESI;
  
  if ((uint)(unaff_ESI[2] - *unaff_ESI) < param_1) {
    _Dst = (void *)FUN_00408fd0(param_1);
    FID_conflict__memcpy(_Dst,(void *)*unaff_ESI,unaff_ESI[1] - *unaff_ESI);
    iVar1 = *unaff_ESI;
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar1);
    }
    *unaff_ESI = (int)_Dst;
    unaff_ESI[1] = (unaff_ESI[1] - iVar1) + (int)_Dst;
    unaff_ESI[2] = (int)_Dst + param_1;
  }
  return;
}

