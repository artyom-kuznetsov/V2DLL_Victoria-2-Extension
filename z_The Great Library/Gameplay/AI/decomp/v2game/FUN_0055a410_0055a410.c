// FUN_0055a410 @ 0055a410 body=[[0055a410, 0055a4eb]]


void FUN_0055a410(int param_1,int param_2,int param_3,int *param_4,int param_5,char param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  
  if (param_2 <= param_3) {
    *(int *)(param_1 + param_2 * 4) = *param_4;
    return;
  }
  do {
    iVar4 = (param_2 + -1) / 2;
    iVar1 = *(int *)(param_1 + iVar4 * 4);
    iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar1 + 0xc) * 4);
    iVar3 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(*param_4 + 0xc) * 4);
    cVar5 = param_6;
    if (*(int *)(iVar1 + 0xc) == 0) {
LAB_0055a493:
      if (cVar5 == '\0') break;
    }
    else {
      if (*(int *)(*param_4 + 0xc) == 0) {
        cVar5 = param_6 == '\0';
        goto LAB_0055a493;
      }
      if (*(int *)(iVar2 + 0x20) == *(int *)(param_5 + 4)) {
        *(int *)(param_1 + param_2 * 4) = *param_4;
        return;
      }
      if (*(int *)(iVar3 + 0x20) != *(int *)(param_5 + 4)) {
        cVar5 = *(int *)(iVar3 + 0x7dc) < *(int *)(iVar2 + 0x7dc);
        goto LAB_0055a493;
      }
    }
    *(int *)(param_1 + param_2 * 4) = iVar1;
    param_2 = iVar4;
  } while (param_3 < iVar4);
  *(int *)(param_1 + param_2 * 4) = *param_4;
  return;
}

