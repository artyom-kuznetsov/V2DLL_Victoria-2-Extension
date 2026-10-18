// FUN_00a8fa30 @ 00a8fa30 body=[[00a8fa30, 00a8fcba]]


void FUN_00a8fa30(char param_1)

{
  int in_EAX;
  uint uVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  if (0 < *(int *)(in_EAX + 0x44)) {
    uVar3 = ~*(uint *)(in_EAX + 0x260);
    uVar1 = (*(int *)(in_EAX + 0x264) << 1 | (uint)(*(int *)(in_EAX + 0x264) < 0)) ^ uVar3;
    *(uint *)(in_EAX + 0x260) = uVar3;
    *(uint *)(in_EAX + 0x264) = uVar1;
    if (1 < *(int *)(in_EAX + 0x26c)) {
      *(undefined4 *)(in_EAX + 0x4c) = 0;
    }
    if (1 < *(int *)(in_EAX + 0x268)) {
      pcVar4 = "    block %d: crc = 0x%08x, combined CRC = 0x%08x, size = %d\n";
      iVar2 = FUN_00aaf1e2("    block %d: crc = 0x%08x, combined CRC = 0x%08x, size = %d\n",
                           *(int *)(in_EAX + 0x26c),uVar3,uVar1,*(int *)(in_EAX + 0x44));
      _fprintf((FILE *)(iVar2 + 0x40),pcVar4);
    }
    FUN_00a935b0();
  }
  *(int *)(in_EAX + 0x2c) = *(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 0x44);
  if (*(int *)(in_EAX + 0x26c) == 1) {
    *(undefined4 *)(in_EAX + 0x25c) = 0;
    *(undefined4 *)(in_EAX + 600) = 0;
    FUN_00a8dde0(8);
    FUN_00a8dde0(8);
    FUN_00a8dde0(8);
    FUN_00a8dde0(8);
  }
  if (0 < *(int *)(in_EAX + 0x44)) {
    FUN_00a8dde0(8);
    FUN_00a8dde0(8);
    FUN_00a8dde0(8);
    FUN_00a8dde0(8);
    FUN_00a8dde0(8);
    FUN_00a8dde0(8);
    FUN_00a8dde0(8);
    FUN_00a8dde0(8);
    FUN_00a8dde0(8);
    FUN_00a8dde0(8);
    FUN_00a8dde0(1);
    FUN_00a8dde0(0x18);
    FUN_00a8dec0();
    FUN_00a8e070();
  }
  if (param_1 != '\0') {
    FUN_00a8dde0(8);
    FUN_00a8dde0(8);
    FUN_00a8dde0(8);
    FUN_00a8dde0(8);
    FUN_00a8dde0(8);
    FUN_00a8dde0(8);
    FUN_00a8dde0(8);
    FUN_00a8dde0(8);
    FUN_00a8dde0(8);
    FUN_00a8dde0(8);
    if (1 < *(int *)(in_EAX + 0x268)) {
      pcVar4 = "    final combined CRC = 0x%08x\n   ";
      iVar2 = FUN_00aaf1e2("    final combined CRC = 0x%08x\n   ",*(undefined4 *)(in_EAX + 0x264));
      _fprintf((FILE *)(iVar2 + 0x40),pcVar4);
    }
    FUN_00a8dda0();
  }
  return;
}

