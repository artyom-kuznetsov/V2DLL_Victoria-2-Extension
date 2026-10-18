// FUN_00849a60 @ 00849a60 body=[[00849a60, 00849b55]]


void FUN_00849a60(int param_1,int param_2,int param_3)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  while (param_2 < in_EAX) {
    iVar1 = (in_EAX + -1) / 2;
    iVar2 = iVar1 * 100;
    puVar3 = (undefined4 *)(iVar2 + param_1);
    if (*(int *)(iVar2 + 4 + param_1) <= *(int *)(param_3 + 4)) break;
    iVar2 = in_EAX * 100;
    *(undefined4 *)(iVar2 + param_1) = *puVar3;
    *(undefined4 *)(iVar2 + 4 + param_1) = puVar3[1];
    iVar2 = iVar2 + param_1;
    *(undefined4 *)(iVar2 + 8) = puVar3[2];
    *(undefined4 *)(iVar2 + 0xc) = puVar3[3];
    *(undefined4 *)(iVar2 + 0x10) = puVar3[4];
    *(undefined4 *)(iVar2 + 0x14) = puVar3[5];
    *(undefined4 *)(iVar2 + 0x18) = puVar3[6];
    *(undefined4 *)(iVar2 + 0x1c) = puVar3[7];
    *(undefined4 *)(iVar2 + 0x20) = puVar3[8];
    *(undefined4 *)(iVar2 + 0x24) = puVar3[9];
    *(undefined4 *)(iVar2 + 0x28) = puVar3[10];
    *(undefined4 *)(iVar2 + 0x2c) = puVar3[0xb];
    *(undefined4 *)(iVar2 + 0x30) = puVar3[0xc];
    *(undefined4 *)(iVar2 + 0x34) = puVar3[0xd];
    *(undefined4 *)(iVar2 + 0x38) = puVar3[0xe];
    *(undefined4 *)(iVar2 + 0x3c) = puVar3[0xf];
    *(undefined4 *)(iVar2 + 0x40) = puVar3[0x10];
    *(undefined4 *)(iVar2 + 0x44) = puVar3[0x11];
    *(undefined4 *)(iVar2 + 0x48) = puVar3[0x12];
    *(undefined4 *)(iVar2 + 0x4c) = puVar3[0x13];
    *(undefined4 *)(iVar2 + 0x50) = puVar3[0x14];
    *(undefined4 *)(iVar2 + 0x54) = puVar3[0x15];
    *(undefined4 *)(iVar2 + 0x58) = puVar3[0x16];
    *(undefined1 *)(iVar2 + 0x5c) = *(undefined1 *)(puVar3 + 0x17);
    *(undefined4 *)(iVar2 + 0x60) = puVar3[0x18];
    in_EAX = iVar1;
  }
  FUN_00849680();
  return;
}

