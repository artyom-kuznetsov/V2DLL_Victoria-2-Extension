// FUN_00aedf60 @ 00aedf60 body=[[00aedf60, 00aedfdd]]


void FUN_00aedf60(undefined1 *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  short *psVar3;
  int iVar4;
  
  if (param_2 == 1) {
    puVar2 = param_1;
    for (iVar4 = param_3 * 4; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar1 = *puVar2;
      *puVar2 = puVar2[1];
      puVar2[1] = uVar1;
      puVar2 = puVar2 + 2;
    }
  }
  FUN_00b19030(param_1,param_3);
  if (param_3 != 0) {
    psVar3 = (short *)(param_1 + 4);
    do {
      if (psVar3[1] < 0) {
        psVar3[-2] = -psVar3[-2];
        psVar3[-1] = -psVar3[-1];
        *psVar3 = -*psVar3;
        psVar3[1] = -psVar3[1];
      }
      psVar3 = psVar3 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

