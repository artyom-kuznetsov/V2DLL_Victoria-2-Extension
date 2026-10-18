// FUN_0082ec40 @ 0082ec40 body=[[0082ec40, 0082ecd2]]


void FUN_0082ec40(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int in_EAX;
  uint *puVar5;
  uint local_c;
  int local_8;
  
  *(uint *)(in_EAX + 8) = param_1;
  *(int *)(in_EAX + 0xc) = param_2;
  local_8 = *(int *)(in_EAX + 0x14);
  local_c = *(uint *)(in_EAX + 0x10);
  if ((local_8 < param_2) ||
     ((local_8 <= param_2 && (*(uint *)(in_EAX + 0x10) <= *(uint *)(in_EAX + 8))))) {
    puVar5 = &local_c;
  }
  else {
    puVar5 = &param_1;
  }
  uVar1 = *puVar5;
  uVar2 = puVar5[1];
  *(uint *)(in_EAX + 8) = uVar1;
  *(uint *)(in_EAX + 0xc) = uVar2;
  iVar3 = *(int *)(in_EAX + 0x1c);
  iVar4 = *(int *)(in_EAX + 0xc);
  if ((iVar3 <= iVar4) && ((iVar3 < iVar4 || (*(uint *)(in_EAX + 0x18) < uVar1)))) {
    *(uint *)(in_EAX + 8) = uVar1;
    *(int *)(in_EAX + 0xc) = iVar4;
    return;
  }
  *(uint *)(in_EAX + 8) = *(uint *)(in_EAX + 0x18);
  *(int *)(in_EAX + 0xc) = iVar3;
  return;
}

