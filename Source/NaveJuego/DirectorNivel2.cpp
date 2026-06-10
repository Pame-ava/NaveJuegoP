// Fill out your copyright notice in the Description page of Project Settings.


#include "DirectorNivel2.h"

UDirectorNivel2::UDirectorNivel2()
{
	Builder = nullptr;
}

void UDirectorNivel2::ChangeBuilder(INivel2* NewBuilder)
{
	Builder = NewBuilder;
}
