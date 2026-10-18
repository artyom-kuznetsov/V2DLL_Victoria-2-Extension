// FUN_00a4d670 @ 00a4d670 body=[[00a4d670, 00a4d6e6]]


float10 FUN_00a4d670(void)

{
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 in_stack_00000044;
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000050;
  undefined4 auStack_68 [16];
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  char *pcStack_18;
  float local_c;
  char local_5;
  
  pcStack_18 = &local_5;
  uStack_1c = in_stack_00000050;
  local_c = DAT_00f092dc;
  local_28 = in_stack_00000044;
  local_20 = in_stack_0000004c;
  uVar1 = *(undefined4 *)(in_ECX + 0xa8);
  puVar4 = auStack_68;
  puVar3 = (undefined4 *)register0x00000010;
  for (iVar2 = 0x10; puVar3 = puVar3 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar4 = puVar4 + 1;
  }
  local_5 = '\0';
  FUN_00a4d6f0(uVar1,&local_c);
  if (local_5 != '\0') {
    return (float10)local_c;
  }
  return (float10)DAT_00f092dc;
}

