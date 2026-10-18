// FUN_00855100 @ 00855100 body=[[00855100, 0085513c] [00855140, 008551ed]]


void FUN_00855100(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int in_EAX;
  int iVar5;
  int in_ECX;
  int iVar6;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  undefined4 *local_8;
  
  iVar3 = (in_EAX - in_ECX) / 0xc;
  iVar6 = iVar3 / 2;
  if (0 < iVar6) {
    local_c = iVar6 * 2 + 2;
    local_8 = (undefined4 *)(in_ECX + 8 + iVar6 * 0xc);
    do {
      local_1c = local_8[-5];
      local_18 = local_8[-4];
      local_14 = local_8[-3];
      iVar6 = iVar6 + -1;
      local_c = local_c + -2;
      iVar4 = iVar6;
      for (iVar5 = local_c; iVar5 < iVar3; iVar5 = iVar5 * 2 + 2) {
        if (*(int *)(in_ECX + -0xc + iVar5 * 0xc) < *(int *)(in_ECX + iVar5 * 0xc)) {
          iVar5 = iVar5 + -1;
        }
        iVar1 = in_ECX + iVar5 * 0xc;
        puVar2 = (undefined4 *)(in_ECX + iVar4 * 0xc);
        *puVar2 = *(undefined4 *)(in_ECX + iVar5 * 0xc);
        puVar2[1] = *(undefined4 *)(iVar1 + 4);
        puVar2[2] = *(undefined4 *)(iVar1 + 8);
        iVar4 = iVar5;
      }
      if (iVar5 == iVar3) {
        iVar5 = in_ECX + -0xc + iVar3 * 0xc;
        puVar2 = (undefined4 *)(in_ECX + iVar4 * 0xc);
        *puVar2 = *(undefined4 *)(in_ECX + -0xc + iVar3 * 0xc);
        puVar2[1] = *(undefined4 *)(iVar5 + 4);
        puVar2[2] = *(undefined4 *)(iVar5 + 8);
      }
      local_10 = iVar6;
      local_8 = local_8 + -3;
      FUN_00855490(iVar6,&local_1c,param_1);
    } while (0 < iVar6);
  }
  return;
}

