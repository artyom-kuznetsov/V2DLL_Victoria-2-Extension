// FUN_0047bdb0 @ 0047bdb0 body=[[0047bdb0, 0047be27]]


void FUN_0047bdb0(void)

{
  undefined4 uVar1;
  int in_EAX;
  undefined8 *puVar2;
  int in_ECX;
  
  uVar1 = DAT_00f092fc;
  if (in_ECX != 0) {
    puVar2 = (undefined8 *)(in_EAX + 0xc);
    do {
      if (puVar2 != (undefined8 *)0xc) {
        *(undefined4 *)((int)puVar2 + -0xc) = 0;
        *puVar2 = CONCAT44(uVar1,uVar1);
        *(undefined4 *)((int)puVar2 + -4) = 0x18d;
        *(undefined ***)(puVar2 + -1) = CColor::vftable;
        puVar2[1] = CONCAT44(uVar1,uVar1);
        *(undefined1 *)(puVar2 + 2) = 1;
      }
      puVar2 = puVar2 + 4;
      in_ECX = in_ECX + -1;
    } while (in_ECX != 0);
  }
  return;
}

