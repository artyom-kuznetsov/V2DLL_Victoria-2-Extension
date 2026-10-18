// FUN_009d7290 @ 009d7290 body=[[009d7290, 009d72d9] [009d72dd, 009d72f2]]


/* WARNING: Removing unreachable block (ram,0x009d729b) */

void FUN_009d7290(uint param_1)

{
  int iVar1;
  void *_Dst;
  int *unaff_ESI;
  
  if ((uint)(unaff_ESI[2] - *unaff_ESI) < param_1) {
    _Dst = (void *)FUN_009d6a00();
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

