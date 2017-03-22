/**
 * Copyright (C) 2017 Chalmers Revere
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef SIM_MINIATURE_DIFFERENTIAL_H
#define SIM_MINIATURE_DIFFERENTIAL_H

#include <memory>
#include <string>

#include <opendavinci/odcore/base/module/TimeTriggeredConferenceClientModule.h>

namespace opendlv {
namespace sim {
namespace miniature {


class Differential : public odcore::base::module::TimeTriggeredConferenceClientModule {
   public:
    Differential(int32_t const &, char **);
    Differential(Differential const &) = delete;
    Differential &operator=(Differential const &) = delete;
    virtual ~Differential();

   private:
    void nextContainer(odcore::data::Container &);
    virtual void setUp();
    virtual void tearDown();
    odcore::data::dmcp::ModuleExitCodeMessage::ModuleExitCode body();

    bool m_debug;
};

}
}
}

#endif
