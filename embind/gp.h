// gp_Pnt
class_<gp_Pnt>("gp_Pnt")
  .function("Coord_1", select_overload<Standard_Real(const Standard_Integer)const>(&gp_Pnt::Coord))
  .function("Coord_2",
    reinterpret_cast<void (gp_Pnt::*)(const Standard_Real&, const Standard_Real&, const Standard_Real&)const>
    (select_overload<void(Standard_Real&, Standard_Real&, Standard_Real&)const>(&gp_Pnt::Coord))
  );
