// FUN_00902a10 @ 00902a10 body=[[00902a10, 00902a3c]]


void FUN_00902a10(undefined4 param_1)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0x18d;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined2 *)(in_EAX + 6) = 0;
  *(undefined2 *)(in_EAX + 7) = 0;
  *in_EAX = CCanBuildProvinceBuildingInCapitalTrigger::vftable;
  in_EAX[8] = param_1;
  return;
}

