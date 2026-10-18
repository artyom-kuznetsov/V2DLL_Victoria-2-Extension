// FUN_00a1b470 @ 00a1b470 body=[[00a1b470, 00a1b4ae]]


undefined4 FUN_00a1b470(void)

{
  uint *puVar1;
  int in_EAX;
  
  if ((in_EAX != 0) && (puVar1 = *(uint **)(in_EAX + 0x1c), puVar1 != (uint *)0x0)) {
    *(undefined4 *)(in_EAX + 0x14) = 0;
    *(undefined4 *)(in_EAX + 8) = 0;
    *(undefined4 *)(in_EAX + 0x18) = 0;
    *puVar1 = -(uint)(puVar1[3] != 0) & 7;
    FUN_00a19c70();
    return 0;
  }
  return 0xfffffffe;
}

