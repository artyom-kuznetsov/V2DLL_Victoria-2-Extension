// FUN_0095c920 @ 0095c920 body=[[0095c920, 0095c9a3]]


void FUN_0095c920(char param_1)

{
  undefined4 uVar1;
  int in_EAX;
  undefined **ppuVar2;
  undefined4 *puVar3;
  undefined4 *unaff_ESI;
  undefined **ppuVar4;
  undefined1 local_10 [12];
  
  if (param_1 == '\0') {
    FUN_0047e2f0(0x50000,0);
    ppuVar2 = *(undefined ***)(in_EAX + 0x1d4);
    ppuVar4 = &PTR_vftable_00f0ea08;
  }
  else {
    ppuVar2 = *(undefined ***)(in_EAX + 0x1d4);
    ppuVar4 = ppuVar2;
  }
  puVar3 = (undefined4 *)FUN_004dd5e0(ppuVar2[0x2c],local_10,ppuVar4,ppuVar2 + 0x30);
  *(undefined4 *)(in_EAX + 0x148) = *puVar3;
  uVar1 = puVar3[1];
  *(undefined4 *)(in_EAX + 0x14c) = uVar1;
  *unaff_ESI = *(undefined4 *)(in_EAX + 0x148);
  unaff_ESI[1] = uVar1;
  return;
}

