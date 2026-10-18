// FUN_0066a750 @ 0066a750 body=[[0066a750, 0066a7e2]]


void FUN_0066a750(void)

{
  char cVar1;
  int in_EAX;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined4 local_8;
  
  uVar3 = 0;
  cVar1 = FUN_0066bc40();
  if (cVar1 != '\0') {
    puVar2 = (undefined2 *)
             (**(code **)(**(int **)(*(int *)(*(int *)(in_EAX + 0xd90) + 4) + 0x24) + 0x60))
                       (&local_8);
    uVar3 = *puVar2;
  }
  (**(code **)(*(int *)(*(int *)(*(int *)(in_EAX + 0x1640) + 4) + 0x18) + 0x3c))(&local_8);
  local_8 = CONCAT22(local_8._2_2_,uVar3);
  (**(code **)(**(int **)(*(int *)(in_EAX + 0x1640) + 4) + 0x18))(local_8);
  if (*(int *)(in_EAX + 0xda8) == 1) {
    (**(code **)(*(int *)(*(int *)(**(int **)(in_EAX + 0xda0) + 0x20) + 0x18) + 0x38))();
    return;
  }
  FUN_00654120(0,0);
  return;
}

