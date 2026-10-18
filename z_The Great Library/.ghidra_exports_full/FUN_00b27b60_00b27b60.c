// FUN_00b27b60 @ 00b27b60 body=[[00b27b60, 00b27c01]]


int * FUN_00b27b60(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined1 local_8 [4];
  
  if (param_2 != 0) {
    FUN_00b1f840("Archive is read-only");
    return (int *)0x0;
  }
  iVar1 = FUN_00b2a1b0(param_1);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00b27ae0();
    if (piVar2 != (int *)0x0) {
      iVar3 = FUN_00b27940(piVar2,&param_2,local_8);
      if (iVar3 != 0) {
        iVar3 = FUN_00b27850(iVar1,piVar2,param_2);
        if (iVar3 != 0) {
          FUN_00b2a4f0(iVar1);
          return piVar2;
        }
      }
      if (*piVar2 != 0) {
        (*DAT_013f3ab0)(*piVar2);
      }
      (*DAT_013f3ab0)(piVar2);
    }
    FUN_00b2a4f0(iVar1);
  }
  return (int *)0x0;
}

