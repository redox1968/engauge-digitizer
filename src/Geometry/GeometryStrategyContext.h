/******************************************************************************************************
 * (C) 2016 markummitchell@github.com. This file is part of Engauge Digitizer, which is released      *
 * under GNU General Public License version 2 (GPLv2) or (at your option) any later version. See file *
 * LICENSE or go to gnu.org/licenses for details. Distribution requires prior written permission.     *
 ******************************************************************************************************/

#ifndef GEOMETRY_STRATEGY_CONTEXT_H
#define GEOMETRY_STRATEGY_CONTEXT_H

#include "CurveConnectAs.h"
#include "Points.h"
#include <QVector>

class GeometryStrategyAbstractBase;
class Transformation;

/// Class for that manages geometry strategies
class GeometryStrategyContext
{
public:
  /// Single constructor.
  GeometryStrategyContext();
  virtual ~GeometryStrategyContext ();

  /// Calculate geometry parameters
  void calculateGeometry (const Points &points,
                          const Transformation &transformation,
                          CurveConnectAs connectAs,
                          QVector<QString> &x,
                          QVector<QString> &y,
                          QVector<QString> &distanceGraph,
                          QVector<QString> &distancePercent) const;

private:

  QVector<GeometryStrategyAbstractBase*> m_strategies;

};

#endif // GEOMETRY_STRATEGY_CONTEXT_H