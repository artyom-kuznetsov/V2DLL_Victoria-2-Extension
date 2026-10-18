// FUN_007a8070 @ 007a8070 body=[[007a8070, 007a8174]]


void FUN_007a8070(void)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  
  iVar1 = *(int *)(in_EAX + 0x3b4);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(*(int *)(iVar1 + 0x48) + 0x18) + 0x38))();
    (**(code **)(*(int *)(*(int *)(iVar1 + 0x4c) + 0x18) + 0x38))();
    (**(code **)(**(int **)(iVar1 + 0x5c) + 0x54))();
  }
  (**(code **)(*(int *)(*(int *)(in_EAX + 0x390) + 0x18) + 0x38))();
  (**(code **)(*(int *)(*(int *)(in_EAX + 0x394) + 0x18) + 0x38))();
  (**(code **)(*(int *)(*(int *)(in_EAX + 0x398) + 0x18) + 0x38))();
  iVar1 = *(int *)(in_EAX + 0x3ac);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0xd0) = 0;
    (**(code **)(**(int **)(iVar1 + 0x30) + 0x54))();
    iVar2 = *(int *)(iVar1 + 0x4c);
    *(undefined1 *)(iVar2 + 0x30) = 0;
    (**(code **)(*(int *)(*(int *)(iVar2 + 0x38) + 0x18) + 0x38))();
    (**(code **)(**(int **)(iVar1 + 0x34) + 0x54))();
    (**(code **)(*(int *)(*(int *)(iVar1 + 0x48) + 0x18) + 0x38))();
  }
  iVar1 = *(int *)(in_EAX + 0x3b0);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(*(int *)(iVar1 + 0x100) + 0x18) + 0x38))();
    (**(code **)(*(int *)(*(int *)(iVar1 + 0x4c) + 0x18) + 0x38))();
    (**(code **)(**(int **)(iVar1 + 0x38) + 0x54))();
  }
  (**(code **)(*(int *)(*(int *)(in_EAX + 0x3b8) + 0x18) + 0x38))();
                    /* WARNING: Could not recover jumptable at 0x007a8173. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(*(int *)(in_EAX + 0x3bc) + 0x18) + 0x38))();
  return;
}

