// FUN_0082c1d0 @ 0082c1d0 body=[[0082c1d0, 0082c268] [0082c270, 0082c37f]]


int FUN_0082c1d0(int param_1,int param_2,float *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  char cVar6;
  float in_XMM0_Da;
  
  iVar5 = param_1;
  if ((*(int *)(param_2 + 0xdc) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_2 + 0xdc) + 0xe8), iVar1 != 0)) {
    piVar2 = *(int **)(iVar1 + 4);
    param_1 = 0;
    while (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      piVar2 = (int *)piVar2[2];
      cVar6 = FUN_0082d340(iVar5,param_2,iVar1);
      if ((cVar6 != '\0') && (FUN_0082aea0(iVar5,param_2,iVar1), in_XMM0_Da < *param_3)) {
        *param_3 = in_XMM0_Da;
        param_1 = *(int *)(iVar1 + 0x58);
      }
    }
    puVar4 = *(undefined4 **)(*(int *)(*(int *)(param_2 + 0xdc) + 0xe8) + 0x14);
    while (puVar4 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)puVar4[2];
      piVar2 = *(int **)(*(int *)*puVar4 + 4);
      iVar1 = *piVar2;
      cVar6 = FUN_0051b040(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar5 + 0x38) * 4))
      ;
      puVar4 = puVar3;
      if ((cVar6 != '\0') ||
         (((*(char *)(iVar1 + 0x130) == 'R' && (*(char *)(iVar1 + 0x131) == 'E')) &&
          (*(char *)(iVar1 + 0x132) == 'B')))) {
        while (piVar2 != (int *)0x0) {
          iVar1 = *piVar2;
          piVar2 = (int *)piVar2[2];
          cVar6 = FUN_0082d340(iVar5,param_2,iVar1);
          if ((cVar6 != '\0') && (FUN_0082aea0(iVar5,param_2,iVar1), in_XMM0_Da < *param_3)) {
            *param_3 = in_XMM0_Da;
            param_1 = *(int *)(iVar1 + 0x58);
          }
        }
      }
    }
    if (((param_1 == 0) &&
        ((cVar6 = FUN_0082da90(iVar5), cVar6 == '\0' ||
         (cVar6 = FUN_0082d340(iVar5,param_2,*(undefined4 *)(param_2 + 0xdc)), cVar6 == '\0')))) &&
       (*(int *)(*(int *)(param_2 + 0xdc) + 0x58) != *(int *)(iVar5 + 0xdc))) {
      *param_3 = 0.0;
      param_1 = *(int *)(iVar5 + 0xdc);
    }
    return param_1;
  }
  *param_3 = 0.0;
  return *(int *)(param_1 + 0xdc);
}

