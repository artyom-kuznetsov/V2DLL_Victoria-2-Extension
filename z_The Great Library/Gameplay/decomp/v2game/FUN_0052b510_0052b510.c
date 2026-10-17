// FUN_0052b510 @ 0052b510  (requested 0052B510, first bytes: 8B 0D C8 96 F0 00 C7 00)


void FUN_0052b510(void)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint *in_EAX;
  int in_EDX;
  
  iVar4 = DAT_00f096c8;
  *in_EAX = 0;
  in_EAX[1] = 0;
  puVar2 = *(uint **)(in_EDX + (iVar4 + 0xd) * 0x10);
  uVar3 = *puVar2;
  uVar1 = *in_EAX;
  *in_EAX = *in_EAX + uVar3;
  in_EAX[1] = in_EAX[1] + puVar2[1] + (uint)CARRY4(uVar1,uVar3);
  uVar3 = puVar2[2];
  uVar1 = *in_EAX;
  *in_EAX = *in_EAX + uVar3;
  in_EAX[1] = in_EAX[1] + puVar2[3] + (uint)CARRY4(uVar1,uVar3);
  uVar3 = puVar2[4];
  uVar1 = *in_EAX;
  *in_EAX = *in_EAX + uVar3;
  in_EAX[1] = in_EAX[1] + puVar2[5] + (uint)CARRY4(uVar1,uVar3);
  uVar3 = puVar2[6];
  uVar1 = *in_EAX;
  *in_EAX = *in_EAX + uVar3;
  in_EAX[1] = in_EAX[1] + puVar2[7] + (uint)CARRY4(uVar1,uVar3);
  uVar3 = puVar2[8];
  uVar1 = *in_EAX;
  *in_EAX = *in_EAX + uVar3;
  in_EAX[1] = in_EAX[1] + puVar2[9] + (uint)CARRY4(uVar1,uVar3);
  uVar3 = puVar2[10];
  uVar1 = *in_EAX;
  *in_EAX = *in_EAX + uVar3;
  in_EAX[1] = in_EAX[1] + puVar2[0xb] + (uint)CARRY4(uVar1,uVar3);
  uVar3 = puVar2[0xc];
  uVar1 = *in_EAX;
  *in_EAX = *in_EAX + uVar3;
  in_EAX[1] = in_EAX[1] + puVar2[0xd] + (uint)CARRY4(uVar1,uVar3);
  uVar3 = puVar2[0xe];
  uVar1 = *in_EAX;
  *in_EAX = *in_EAX + uVar3;
  in_EAX[1] = in_EAX[1] + puVar2[0xf] + (uint)CARRY4(uVar1,uVar3);
  uVar3 = puVar2[0x10];
  uVar1 = *in_EAX;
  *in_EAX = *in_EAX + uVar3;
  in_EAX[1] = in_EAX[1] + puVar2[0x11] + (uint)CARRY4(uVar1,uVar3);
  uVar3 = puVar2[0x12];
  uVar1 = *in_EAX;
  *in_EAX = *in_EAX + uVar3;
  in_EAX[1] = in_EAX[1] + puVar2[0x13] + (uint)CARRY4(uVar1,uVar3);
  return;
}

