// FUN_005bd130 @ 005bd130 body=[[005bd130, 005bd208] [005bd212, 005bd4e6]]


void FUN_005bd130(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_EAX;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_ESI;
  int local_8;
  
  FUN_00408ed0(in_EAX + 8,0,0xffffffff);
  *(undefined4 *)(unaff_ESI + 0x24) = *(undefined4 *)(in_EAX + 0x24);
  *(undefined4 *)(unaff_ESI + 0x34) = *(undefined4 *)(in_EAX + 0x34);
  *(undefined1 *)(unaff_ESI + 0x38) = *(undefined1 *)(in_EAX + 0x38);
  *(undefined1 *)(unaff_ESI + 0x39) = *(undefined1 *)(in_EAX + 0x39);
  *(undefined1 *)(unaff_ESI + 0x3a) = *(undefined1 *)(in_EAX + 0x3a);
  *(undefined1 *)(unaff_ESI + 0x40) = *(undefined1 *)(in_EAX + 0x40);
  *(undefined1 *)(unaff_ESI + 0x41) = *(undefined1 *)(in_EAX + 0x41);
  *(undefined1 *)(unaff_ESI + 0x42) = *(undefined1 *)(in_EAX + 0x42);
  *(undefined1 *)(unaff_ESI + 0x30) = *(undefined1 *)(in_EAX + 0x30);
  *(undefined1 *)(unaff_ESI + 0x43) = *(undefined1 *)(in_EAX + 0x43);
  *(undefined4 *)(unaff_ESI + 0x28) = *(undefined4 *)(in_EAX + 0x28);
  *(undefined4 *)(unaff_ESI + 0x2c) = *(undefined4 *)(in_EAX + 0x2c);
  *(undefined1 *)(unaff_ESI + 0x3b) = *(undefined1 *)(in_EAX + 0x3b);
  *(undefined1 *)(unaff_ESI + 0x3f) = *(undefined1 *)(in_EAX + 0x3f);
  *(undefined1 *)(unaff_ESI + 0x3c) = *(undefined1 *)(in_EAX + 0x3c);
  *(undefined1 *)(unaff_ESI + 0x3d) = *(undefined1 *)(in_EAX + 0x3d);
  *(undefined1 *)(unaff_ESI + 0x3e) = *(undefined1 *)(in_EAX + 0x3e);
  *(undefined1 *)(unaff_ESI + 0x45) = *(undefined1 *)(in_EAX + 0x45);
  *(undefined1 *)(unaff_ESI + 0x44) = *(undefined1 *)(in_EAX + 0x44);
  FUN_00408ed0(in_EAX + 0x20c,0,0xffffffff);
  FUN_00408ed0(in_EAX + 0x1f0,0,0xffffffff);
  if (*(int *)(unaff_ESI + 0x50) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(unaff_ESI + 0x50));
  }
  *(undefined4 *)(unaff_ESI + 0x50) = 0;
  *(undefined4 *)(unaff_ESI + 0x54) = 0;
  *(undefined4 *)(unaff_ESI + 0x58) = 0;
  puVar2 = *(undefined4 **)(in_EAX + 0x50);
  while (puVar2 != (undefined4 *)0x0) {
    iVar6 = *(int *)(unaff_ESI + 0x54);
    puVar1 = (undefined4 *)puVar2[2];
    puVar3 = (undefined4 *)FUN_00aae9af(0x10);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = *puVar2;
      puVar3[1] = iVar6;
      puVar3[2] = 0;
      *(undefined1 *)(puVar3 + 3) = 0;
    }
    iVar4 = *(int *)(unaff_ESI + 0x58);
    *(undefined4 **)(unaff_ESI + 0x54) = puVar3;
    *(int *)(unaff_ESI + 0x58) = iVar4 + 1;
    puVar2 = puVar1;
    if (iVar4 == 0) {
      *(undefined4 **)(unaff_ESI + 0x50) = puVar3;
    }
    else {
      *(undefined4 **)(iVar6 + 8) = puVar3;
    }
  }
  *(undefined4 *)(unaff_ESI + 0x90) = *(undefined4 *)(in_EAX + 0x90);
  *(undefined4 *)(unaff_ESI + 0x94) = *(undefined4 *)(in_EAX + 0x94);
  *(undefined4 *)(unaff_ESI + 0x98) = *(undefined4 *)(in_EAX + 0x98);
  *(undefined4 *)(unaff_ESI + 0x9c) = *(undefined4 *)(in_EAX + 0x9c);
  *(undefined4 *)(unaff_ESI + 0x78) = *(undefined4 *)(in_EAX + 0x78);
  *(undefined4 *)(unaff_ESI + 0x7c) = *(undefined4 *)(in_EAX + 0x7c);
  *(undefined4 *)(unaff_ESI + 0x80) = *(undefined4 *)(in_EAX + 0x80);
  *(undefined4 *)(unaff_ESI + 0x84) = *(undefined4 *)(in_EAX + 0x84);
  local_8 = 0;
  if (0 < (*(int *)(unaff_ESI + 100) - *(int *)(unaff_ESI + 0x60)) / 0x18) {
    iVar6 = 0;
    do {
      iVar5 = *(int *)(unaff_ESI + 0x60) + iVar6;
      iVar4 = *(int *)(in_EAX + 0x60) + iVar6;
      *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(*(int *)(in_EAX + 0x60) + 8 + iVar6);
      *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar4 + 0xc);
      *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(iVar4 + 0x10);
      local_8 = local_8 + 1;
      *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)(iVar4 + 0x14);
      iVar6 = iVar6 + 0x18;
    } while (local_8 < (*(int *)(unaff_ESI + 100) - *(int *)(unaff_ESI + 0x60)) / 0x18);
  }
  *(undefined4 *)(unaff_ESI + 0xc0) = *(undefined4 *)(in_EAX + 0xc0);
  *(undefined4 *)(unaff_ESI + 0xc4) = *(undefined4 *)(in_EAX + 0xc4);
  FUN_0047dbb0(unaff_ESI + 200,in_EAX + 200);
  FUN_0047dbb0(unaff_ESI + 0x120,in_EAX + 0x120);
  *(undefined4 *)(unaff_ESI + 0xbc) = *(undefined4 *)(in_EAX + 0xbc);
  *(undefined4 *)(unaff_ESI + 0xb0) = *(undefined4 *)(in_EAX + 0xb0);
  *(undefined4 *)(unaff_ESI + 0xb4) = *(undefined4 *)(in_EAX + 0xb4);
  *(undefined4 *)(unaff_ESI + 0xb8) = *(undefined4 *)(in_EAX + 0xb8);
  *(undefined4 *)(unaff_ESI + 0xac) = *(undefined4 *)(in_EAX + 0xac);
  *(undefined4 *)(unaff_ESI + 0xa0) = *(undefined4 *)(in_EAX + 0xa0);
  *(undefined4 *)(unaff_ESI + 0xa4) = *(undefined4 *)(in_EAX + 0xa4);
  *(undefined4 *)(unaff_ESI + 0xa8) = *(undefined4 *)(in_EAX + 0xa8);
  *(undefined4 *)(unaff_ESI + 0x22c) = *(undefined4 *)(in_EAX + 0x22c);
  *(undefined4 *)(unaff_ESI + 0x228) = *(undefined4 *)(in_EAX + 0x228);
  *(undefined4 *)(unaff_ESI + 0x230) = *(undefined4 *)(in_EAX + 0x230);
  *(undefined4 *)(unaff_ESI + 0x234) = *(undefined4 *)(in_EAX + 0x234);
  *(undefined4 *)(unaff_ESI + 0x238) = *(undefined4 *)(in_EAX + 0x238);
  *(undefined4 *)(unaff_ESI + 0x23c) = *(undefined4 *)(in_EAX + 0x23c);
  *(undefined4 *)(unaff_ESI + 0x240) = *(undefined4 *)(in_EAX + 0x240);
  *(undefined4 *)(unaff_ESI + 0x244) = *(undefined4 *)(in_EAX + 0x244);
  *(undefined4 *)(unaff_ESI + 0x248) = *(undefined4 *)(in_EAX + 0x248);
  *(undefined4 *)(unaff_ESI + 0x25c) = *(undefined4 *)(in_EAX + 0x25c);
  *(undefined4 *)(unaff_ESI + 0x24c) = *(undefined4 *)(in_EAX + 0x24c);
  *(undefined4 *)(unaff_ESI + 0x250) = *(undefined4 *)(in_EAX + 0x250);
  *(undefined4 *)(unaff_ESI + 0x178) = *(undefined4 *)(in_EAX + 0x178);
  FUN_00408ed0(in_EAX + 0x17c,0,0xffffffff);
  FUN_00408ed0(in_EAX + 0x1d0,0,0xffffffff);
  FUN_00408ed0(in_EAX + 0x198,0,0xffffffff);
  FUN_00408ed0(in_EAX + 0x1b4,0,0xffffffff);
  *(undefined4 *)(unaff_ESI + 0x254) = *(undefined4 *)(in_EAX + 0x254);
  *(undefined4 *)(unaff_ESI + 600) = *(undefined4 *)(in_EAX + 600);
  return;
}

