// FUN_004c8290 @ 004c8290 body=[[004c8290, 004c83de]]


void FUN_004c8290(int param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 local_c;
  undefined4 local_8;
  
  if (((*(char *)(*(int *)(param_2[0x37] + 0x5c) + 0x2a) == '\0') ||
      (cVar2 = (**(code **)(*param_2 + 0x3c))(), cVar2 == '\0')) &&
     (piVar3 = (int *)FUN_004f2680(&param_2), *piVar3 != *(int *)(param_1 + 0x14c))) {
    piVar3 = (int *)FUN_004c8d10();
    iVar1 = *piVar3;
    piVar3 = (int *)FUN_004f2680(&param_2);
    if (*piVar3 != *(int *)(param_1 + 0x15c)) {
      piVar4 = (int *)FUN_004c8d10();
      piVar4 = (int *)*piVar4;
      iVar5 = 0;
      piVar3 = (int *)(param_1 + 0x1e4 + iVar1 * 0x38);
      do {
        if ((int *)*piVar3 == piVar4) {
          if (-1 < iVar5) {
            iVar5 = iVar5 + iVar1 * 7;
            *(undefined4 *)(param_1 + 0x1e4 + iVar5 * 8) = 0;
            *(undefined4 *)(param_1 + 0x1e0 + iVar5 * 8) = 0;
          }
          break;
        }
        iVar5 = iVar5 + 1;
        piVar3 = piVar3 + 2;
      } while (iVar5 < 7);
      (**(code **)(*piVar4 + 0x38))();
      FUN_004c9400(&local_c,&param_2);
      FUN_00445600(local_c,local_8);
      FUN_009962f0(*(int *)(param_1 + 0x24) + 0x11dc);
    }
    FUN_004c9400(&local_c,&param_2);
    FUN_00445600(local_c,local_8);
    FUN_004c83e0(param_1);
  }
  return;
}

