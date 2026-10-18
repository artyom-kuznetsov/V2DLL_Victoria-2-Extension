// FUN_00a4d6f0 @ 00a4d6f0 body=[[00a4d6f0, 00a4d7d6]]


char FUN_00a4d6f0(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 in_stack_0000004c;
  undefined4 in_stack_00000054;
  undefined4 in_stack_00000058;
  char *in_stack_0000005c;
  undefined4 auStack_6c [14];
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  char *pcStack_1c;
  
  pcVar2 = in_stack_0000005c;
  if (*in_stack_0000005c != '\0') {
    return '\x01';
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    pcStack_1c = (char *)in_stack_00000058;
    uStack_2c = param_2;
    local_28 = (undefined4)in_stack_0000004c;
    uStack_24 = (undefined4)((ulonglong)in_stack_0000004c >> 0x20);
    iStack_30 = param_1;
    local_20 = in_stack_00000054;
    uStack_34 = 0xa4d73f;
    cVar3 = FUN_00a4d7e0();
    *pcVar2 = cVar3;
  }
  iVar1 = *(int *)(param_1 + 0x48);
  if ((iVar1 != 0) && (*pcVar2 == '\0')) {
    pcStack_1c = pcVar2;
    local_20 = in_stack_00000058;
    uStack_2c = (undefined4)in_stack_0000004c;
    local_28 = (undefined4)((ulonglong)in_stack_0000004c >> 0x20);
    uStack_24 = in_stack_00000054;
    puVar5 = (undefined4 *)&stack0x0000000c;
    puVar6 = auStack_6c;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    cVar3 = FUN_00a4d6f0(iVar1,param_2);
    *pcVar2 = cVar3;
  }
  iVar1 = *(int *)(param_1 + 0x4c);
  if ((iVar1 != 0) && (*pcVar2 == '\0')) {
    pcStack_1c = pcVar2;
    local_20 = in_stack_00000058;
    uStack_2c = (undefined4)in_stack_0000004c;
    local_28 = (undefined4)((ulonglong)in_stack_0000004c >> 0x20);
    uStack_24 = in_stack_00000054;
    puVar5 = (undefined4 *)&stack0x0000000c;
    puVar6 = auStack_6c;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    cVar3 = FUN_00a4d6f0(iVar1,param_2);
    *pcVar2 = cVar3;
  }
  return *pcVar2;
}

