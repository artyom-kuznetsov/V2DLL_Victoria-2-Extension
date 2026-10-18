// FUN_00444da0 @ 00444da0 body=[[00444da0, 00444e95]]


void FUN_00444da0(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  int in_EAX;
  short *psVar2;
  int iVar3;
  short sVar4;
  
  if (0xffff < in_EAX) {
    in_EAX = 0xffff;
  }
  FUN_00445260(*param_1,&param_2);
  psVar2 = (short *)FUN_004453b0();
  iVar3 = param_2;
  sVar4 = (short)in_EAX;
  *psVar2 = *psVar2 + sVar4;
  if (param_2 != param_3) {
    psVar2 = (short *)FUN_004453b0();
    *psVar2 = *psVar2 + sVar4;
    psVar2 = (short *)FUN_004453b0();
    *psVar2 = *psVar2 + sVar4;
    piVar1 = DAT_012588e8;
    if ((-1 < iVar3) && (-1 < param_3)) {
      iVar3 = *(int *)(*(int *)(DAT_012588e8[0x2b3] + param_2 * 4) + 300);
      if ((iVar3 != 0) &&
         ((param_2 = *(int *)(*(int *)(DAT_012588e8[0x2b3] + param_3 * 4) + 300), param_2 != 0 &&
          (iVar3 != param_2)))) {
        param_3 = iVar3;
        iVar3 = (**(code **)(*DAT_012588e8 + 0x1c))();
        if (param_3 < iVar3) {
          iVar3 = (**(code **)(*piVar1 + 0x1c))();
          if (param_2 < iVar3) {
            psVar2 = (short *)FUN_004453b0();
            *psVar2 = *psVar2 + sVar4;
            psVar2 = (short *)FUN_004453b0();
            *psVar2 = *psVar2 + sVar4;
            FUN_00445260(param_1[1],&param_3);
            psVar2 = (short *)FUN_004453b0();
            *psVar2 = *psVar2 + sVar4;
          }
        }
      }
    }
  }
  return;
}

