// FUN_00418a30 @ 00418a30 body=[[00418a30, 00418a91]]


void FUN_00418a30(void)

{
  int *in_EAX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_44 [16];
  
  in_EAX[1] = 0;
  if ((int *)*in_EAX != (int *)0x0) {
    (**(code **)(*(int *)*in_EAX + 0x80))();
    (**(code **)(*(int *)*in_EAX + 0x38))();
    FUN_00408b00();
    FUN_00408b00();
    (**(code **)(*(int *)*in_EAX + 0xa4))(local_44);
    puVar2 = local_44;
    puVar3 = (undefined4 *)(*in_EAX + 0x94);
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

