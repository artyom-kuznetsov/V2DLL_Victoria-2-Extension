// FUN_004bbf60 @ 004bbf60 body=[[004bbf60, 004bc012]]


void FUN_004bbf60(undefined4 param_1,int *param_2)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int *piVar3;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  local_c = *(undefined4 *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_EAX + 4) * 4) + 0x10c)
  ;
  piVar3 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_EAX + 4) * 4) + 0xa38);
  local_8 = 0;
  iVar2 = 0x5f5dd18;
  if (piVar3 != (int *)0x0) {
    do {
      iVar1 = *piVar3;
      piVar3 = (int *)piVar3[2];
      if ((*(char *)(iVar1 + 0x170) == '\0') && (*(int *)(iVar1 + 0x134) == *(int *)(iVar1 + 300)))
      {
        FUN_00456700(local_c,&local_10,*(undefined4 *)(iVar1 + 0x58));
        if ((0 < local_10) && (local_10 < iVar2)) {
          iVar2 = local_10;
          local_8 = iVar1;
        }
      }
    } while (piVar3 != (int *)0x0);
    if (local_8 != 0) {
      *param_2 = iVar2;
      return;
    }
  }
  *param_2 = -1000;
  return;
}

