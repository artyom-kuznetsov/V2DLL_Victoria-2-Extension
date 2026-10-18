// FUN_00a46860 @ 00a46860 body=[[00a46860, 00a468f0]]


void FUN_00a46860(void)

{
  undefined4 *in_EAX;
  undefined4 in_ECX;
  
  switch(in_ECX) {
  case 8:
    (**(code **)(*(int *)*in_EAX + 0x2c))(5);
    break;
  case 9:
    (**(code **)(*(int *)*in_EAX + 0x2c))(6);
    return;
  case 0xd:
    (**(code **)(*(int *)*in_EAX + 0x2c))(7);
    return;
  case 0x1b:
                    /* WARNING: Could not recover jumptable at 0x00a468ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)*in_EAX + 0x50))();
    return;
  case 0x23:
    (**(code **)(*(int *)*in_EAX + 0x2c))(1);
    return;
  case 0x24:
    (**(code **)(*(int *)*in_EAX + 0x2c))(0);
    return;
  case 0x25:
    (**(code **)(*(int *)*in_EAX + 0x2c))(2);
    return;
  case 0x27:
    (**(code **)(*(int *)*in_EAX + 0x2c))(3);
    return;
  case 0x2e:
    (**(code **)(*(int *)*in_EAX + 0x2c))(4);
    return;
  }
  return;
}

