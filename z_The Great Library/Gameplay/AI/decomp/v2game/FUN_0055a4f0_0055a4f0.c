// FUN_0055a4f0 @ 0055a4f0 body=[[0055a4f0, 0055a5b9]]


void FUN_0055a4f0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  int unaff_EDI;
  uint local_28 [5];
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  
  while( true ) {
    if (in_EAX <= param_1) {
      *(int *)(unaff_EDI + in_EAX * 4) = *param_2;
      return;
    }
    iVar3 = (in_EAX + -1) / 2;
    iVar1 = *(int *)(*(int *)(unaff_EDI + iVar3 * 4) + 0xe88);
    iVar2 = *(int *)(*param_2 + 0xe88);
    if (iVar1 == 0) {
      local_28[2] = 0;
      local_28[3] = 0;
      puVar4 = local_28 + 2;
    }
    else {
      local_c = *(undefined4 *)(iVar1 + 0x14);
      local_10 = *(uint *)(iVar1 + 0x10);
      puVar4 = &local_10;
    }
    if (iVar2 == 0) {
      local_28[0] = 0;
      local_28[1] = 0;
      puVar5 = local_28;
    }
    else {
      local_14 = *(undefined4 *)(iVar2 + 0x14);
      local_28[4] = *(undefined4 *)(iVar2 + 0x10);
      puVar5 = local_28 + 4;
    }
    if ((int)puVar4[1] < (int)puVar5[1]) break;
    if (((int)puVar4[1] <= (int)puVar5[1]) && (*puVar4 <= *puVar5)) {
      *(int *)(unaff_EDI + in_EAX * 4) = *param_2;
      return;
    }
    *(undefined4 *)(unaff_EDI + in_EAX * 4) = *(undefined4 *)(unaff_EDI + iVar3 * 4);
    in_EAX = iVar3;
  }
  *(int *)(unaff_EDI + in_EAX * 4) = *param_2;
  return;
}

