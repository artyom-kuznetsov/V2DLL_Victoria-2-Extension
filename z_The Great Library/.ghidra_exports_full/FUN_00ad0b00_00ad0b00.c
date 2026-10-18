// FUN_00ad0b00 @ 00ad0b00 body=[[00ad0b00, 00ad0bb8] [00ad0bc0, 00ad0be1]]


void FUN_00ad0b00(int param_1,void *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 local_40 [64];
  
  if (param_3 == 0) {
    param_3 = *(int *)(in_ECX + 0xc);
  }
  iVar1 = *(int *)(in_ECX + 0x10);
  iVar2 = *(int *)(*(int *)(*(int *)(in_ECX + 0x1ac) + 0x80) + param_1 * 4);
  if (param_2 == (void *)0x0) {
    if (*(int *)(iVar2 + 4) == -1) goto LAB_00ad0bae;
    puVar4 = (undefined1 *)(*(int *)(iVar2 + 4) * 0x40 + param_3);
    param_2 = (void *)(param_1 * 0x40 + iVar1);
  }
  else {
    FID_conflict__memcpy((void *)(param_1 * 0x40 + param_3),param_2,0x40);
    if (*(int *)(iVar2 + 4) == -1) {
      FID_conflict__memcpy((void *)(param_1 * 0x40 + iVar1),param_2,0x40);
      goto LAB_00ad0bae;
    }
    FID_conflict__memcpy(local_40,(void *)(*(int *)(iVar2 + 4) * 0x40 + param_3),0x40);
    FUN_00ad29c0();
    puVar4 = local_40;
  }
  FUN_00ad26a0(param_2,puVar4);
LAB_00ad0bae:
  uVar3 = *(uint *)(iVar2 + 0x40);
  uVar5 = 0;
  if (uVar3 != 0) {
    do {
      FUN_00ad0b00(*(undefined4 *)(*(int *)(iVar2 + 0x3c) + uVar5 * 4),0,param_3);
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  return;
}

