#pragma once

#define LOAD_TABLE(Path, Out)	\
{	\
	FString TablePath = Path;	\
	static ConstructorHelpers::FObjectFinder<UDataTable> DT_Table(*TablePath);	\
	if (DT_Table.Succeeded())	\
	{	\
		Out = DT_Table.Object;	\
		ABCHECK(Out->GetRowMap().Num() > 0, false);	\
	}	\
	else	\
	{	\
		ABLOG(Error, TEXT("Can't Find Table : %s"), *TablePath);	return false; \
	}	\
}	