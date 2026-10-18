// FUN_00559cb0 @ 00559cb0 body=[[00559cb0, 00559d6e]]


void FUN_00559cb0(int param_1)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  int in_ECX;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  undefined8 local_30;
  undefined8 local_28;
  uint local_20;
  undefined4 local_1c;
  uint local_18;
  undefined4 local_14;
  
  while( true ) {
    iVar3 = in_EAX * 2 + 2;
    if (param_1 <= iVar3) break;
    iVar1 = *(int *)(*(int *)(in_ECX + iVar3 * 4) + 0xe88);
    iVar2 = *(int *)(*(int *)(in_ECX + -4 + iVar3 * 4) + 0xe88);
    if (iVar1 == 0) {
      local_28 = 0;
      puVar4 = (uint *)&local_28;
    }
    else {
      local_14 = *(undefined4 *)(iVar1 + 0x14);
      local_18 = *(uint *)(iVar1 + 0x10);
      puVar4 = &local_18;
    }
    if (iVar2 == 0) {
      local_30 = 0;
      puVar5 = (uint *)&local_30;
    }
    else {
      local_20 = *(uint *)(iVar2 + 0x10);
      local_1c = *(undefined4 *)(iVar2 + 0x14);
      puVar5 = &local_20;
    }
    if (((int)puVar5[1] <= (int)puVar4[1]) &&
       (((int)puVar5[1] < (int)puVar4[1] || (*puVar5 < *puVar4)))) {
      iVar3 = in_EAX * 2 + 1;
    }
    *(undefined4 *)(in_ECX + in_EAX * 4) = *(undefined4 *)(in_ECX + iVar3 * 4);
    in_EAX = iVar3;
  }
  if (iVar3 == param_1) {
    *(undefined4 *)(in_ECX + in_EAX * 4) = *(undefined4 *)(in_ECX + -4 + param_1 * 4);
  }
  FUN_0055a4f0();
  return;
}

